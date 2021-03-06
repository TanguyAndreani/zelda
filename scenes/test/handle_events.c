#include "decorator.h"
#include "state.h"

#include "../../include/game_state.h"
#include "../../include/debug.h"

#include "../../generated_code/origins.h"
#include "../../generated_code/rects.h"

#include "lib/link_direction.h"
#include "lib/interactions.h"

void test(items *item, equipment *stuff, sfEvent event)
{
    if (event.type == sfEvtKeyPressed &&
        event.key.code == sfKeyA) {
            item->xp -= 10;
    }
    if (event.type == sfEvtKeyPressed &&
        event.key.code == sfKeyZ) {
            item->xp += 10;
    }
}

int DECORATE(handle_events)(void *data, sfEvent event)
{
    DECORATE(state) *state = data;
    map *maps = &state->my_map;

    test(&state->my_link.link_item, &state->my_link.link_stuff, event);

    inventory_interaction(&state->my_link.link_item, event);
    if (state->my_link.link_item.lock == 0) {
        body_attack(&state->my_link.attck, state->my_link.direction,
                    &state->my_link.link_stuff, event);
        interaction_event(event, &state->my_link, state->my_map.m.objects, maps);
        boomerang_launch(&state->my_link.boomr,
                        state->my_link.direction, event);
        DECORATE(link_direction)(&state->my_link, event);
    }

    return (0);
}
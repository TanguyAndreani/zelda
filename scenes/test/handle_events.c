#include "decorator.h"
#include "state.h"

#include "../../include/game_state.h"
#include "../../include/debug.h"

#include "../../generated_code/origins.h"
#include "../../generated_code/rects.h"

#include "lib/link_direction.h"
#include "lib/interactions.h"

int DECORATE(handle_events)(void *data, sfEvent event)
{
    DECORATE(state) *state = data;

    inventory_interaction(&state->my_link.link_item, event);
    if (state->my_link.link_item.lock == 0) {
        interaction_event(event, &state->my_link, state->my_map.m.objects);
        boomerang_launch(&state->my_link.boomr,
                        state->my_link.direction, event);
        DECORATE(link_direction)(&state->my_link, event);
    }

    return (0);
}
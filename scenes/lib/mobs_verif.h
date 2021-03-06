#ifndef MOB_VERIF_H
#define MOB_VERIF_H

#include <SFML/Graphics.h>
#include <math.h>

#include "../../generated_code/rects.h"
#include "../../generated_code/origins.h"

#include "../../include/sfml_helpers.h"
#include "../../include/debug.h"
#include "../../mobs/mob.h"

#include "../lib/boomerang.h"
#include "../lib/animation.h"
#include "../lib/map.h"
#include "../lib/inventory.h"

void mobs_is_alive(mob *mobs, items *item);

#endif
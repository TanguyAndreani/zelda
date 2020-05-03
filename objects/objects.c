#include <SFML/Graphics.h>

#include "objects.h"

#include "../include/sfml_helpers.h"

object overworld_objects[5] = {
    { .type = POT, .abs_pos = vec_create(42, 57)},
    { .type = POT, .abs_pos = vec_create(42, 73)},
    { .type = CHEST, .abs_pos = vec_create(191, 144)},
    { .type = NPC, .abs_pos = vec_create(150, 150)},
    { .type = NUL_OBJECT}
};
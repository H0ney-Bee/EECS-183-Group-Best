/**
 * Copyright 2019 University of Michigan EECS183
 *
 * Ship.cpp
 * Project UID 8885f2d9f10d2f99bc099aa9c3fc0543
 *
 * <#Name#>
 * <#Uniqname#>
 *
 * Project 4: Battleship
 *
 * <#description#> hello is me are you able to see?
 */

#include <cmath>

#include "Ship.h"


Ship::Ship() {
    start = Position(0,0);
    end = Position(0,0);
    num_hits = 0;
    size = 0;
}

Ship::Ship(Position start_in, Position end_in) {
    // TODO: write implementation here.
}

Position Ship::get_start() {
    // TODO: write implementation here.
    return Position();
}

Position Ship::get_end() {
    // TODO: write implementation here.
    return Position();
}

int Ship::get_size() {
    // TODO: write implementation here.
    return -1;
}

bool Ship::is_horizontal() {
   
   if (pos)

}

bool Ship::has_position(Position pos) {
    // TODO: write implementation here.
    return false;
}

void Ship::hit() {
    // TODO: write implementation here.
    return;
}

bool Ship::has_sunk() {
    // TODO: write implementation here.
    return false;
}

/**
 * Copyright 2019 University of Michigan EECS183
 *
 * Position.cpp
 * Project UID 8885f2d9f10d2f99bc099aa9c3fc0543
 *
 * <#Name#>
 * <#Uniqname#>
 *
 * Project 4: Battleship
 *
 * This file contains the definition (implementation) of a 
 * class that represents a Position for the game Battleship.
 */

#include "Position.h"
#include "utility.h"


Position::Position() {
    row = 0;
    col = 0;

}

Position::Position(int row_in, int col_in) {
    row = check_range(row_in);
    col = check_range(col_in);

}

Position::Position(char row_in, char col_in) {
    int pos_row;
    int pos_col;

    // Converts the row coordinate to underlying integer value on grid
    pos_row = row_in - '1';

    // Converts the col coordinate to underlying integer value on grid
    if (col_in >= 'A' && col_in <= 'Z') {
        pos_col = col_in - 'A';

    }
    else if (col_in >= 'a' && col_in <= 'z') {
        pos_col = col_in - 'a';

    }
    else {
        pos_col = col_in;

    }

    row = check_range(pos_row);
    col = check_range(pos_col);

}

int Position::get_row() {
    return row;
}

void Position::set_row(int row_in) {
    row = check_range(row_in);

    return;
}

int Position::get_col() {
    return col;
}

void Position::set_col(int col_in) {
    col = check_range(col_in);

    return;
}

void Position::read(istream& is) {
    // Attempts to read the format: rowcol
    is >> row;

    char pos_col = '_';
    is >> pos_col;

    // If reading rowcol fails, reads the format: (row,col)
    if (is.fail()) {
        is.clear();

        // Reads in parenthesis and comma
        char j = '_';

        is >> j >> row >> j >> pos_col >> j;

    }

    // Converts  the col coordinate to to underlying integer value on grid
    if (pos_col >= 'A' && pos_col <= 'Z') {
        col = pos_col - 'A';

    }
    else {
        col = pos_col - 'a';

    }

    // Converts the row coordinate to to underlying integer value on grid
    --row;

    row = check_range(row);
    col = check_range(col);

    return;
}

void Position::write(ostream& os) {
    // Converts row from underlying value to the number it actually represents
    int pos_row = row + 1;

    char pos_col = '_';

    // Converts col from underlying value to the letter it actually represents
    pos_col = col + 'A';


    // Prints position in format (row,col)
    os << "(" << pos_row << "," << pos_col << ")";

    return;
}

int Position::check_range(int val) {
    // Converts the position to an acceptable value (if not already)
    if (val < 0) {
        val = 0;
    }
    else if (val >= MAX_GRID_SIZE) {
        val = MAX_GRID_SIZE - 1;
    }

    return val;
}


// Your code goes above this line.
// Don't change the implementations below!

istream &operator>>(istream &is,  Position &pos) {
    pos.read(is);
    return is;
}

ostream &operator<<(ostream &os, Position pos) {
    pos.write(os);
    return os;
}


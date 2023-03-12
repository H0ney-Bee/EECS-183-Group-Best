/**
 * Copyright 2019 University of Michigan EECS183
 *
 * test.cpp
 * Project UID 8885f2d9f10d2f99bc099aa9c3fc0543
 *
 * Project 4: Battleship
 *
 * Contains functions for testing classes in the project. 
 */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "Position.h"
#include "Ship.h"
#include "Player.h"
#include "Game.h"
#include "utility.h"

using namespace std;


void test_position();
void test_ship();
void test_player();
void test_game();

void startTests() {
    test_position();
    test_ship();
    test_player();
    
    return;
}

void test_position() {
    // Write your tests here
    return;
}

void test_ship() {
    cout << "now testing has_position()";

    position testoo(1,'a');
    position ship1(1, 'a');
    position ship2(1, 'b');
    ship st_may(ship1, ship2);
    cout << "expected 1, actual: " << st_may.has_position(testoo) << endl;

    position testwo(2,'b');
    position testhe(4,'c');
    position testfr(3,'b');
    position testfv(3,'A');
    position ship3(3, 'b');
    position ship4(3, 'd');
    ship st_may(ship3, ship4);
    cout << "expected 0, actual: " << st_may.has_position(testwo) << endl;
    cout << "expected 0, actual: " << st_may.has_position(testhe) << endl;
    cout << "expected 1, actual: " << st_may.has_position(testfr) << endl;
    cout << "expected 0, actual: " << st_may.has_position(testfv) << endl;

    position testvt1(2,'c');
    position testvt2(6,'c');
    position testvt3(6,'e');
    position testvt4(3,'A');
    position ship5(5, 'e');
    position ship6(7, 'e');
    ship st_may(ship5, ship6);
    cout << "expected 0, actual: " << st_may.has_position(testvt1) << endl;
    cout << "expected 0, actual: " << st_may.has_position(testvt2) << endl;
    cout << "expected 1, actual: " << st_may.has_position(testvt3) << endl;
    cout << "expected 0, actual: " << st_may.has_position(testvt4) << endl;
    







    return;
}

void test_player() {
    // Write your tests here
    return;
}


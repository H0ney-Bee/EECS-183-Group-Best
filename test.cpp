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
    test_game();
    
    return;
}

void test_position() {
    cout << "Testing Position.cpp" << endl;
    Position Testy(3, 'a');
cout << Testy.get_row() << Testy.get_col() << " - Testy" << endl;
for (int i = -5; i < 10; i++){
cout << Position::check_range(i) << " ";
}
cout << endl;


    return;
}

void test_ship() {
    cout << "now testing has_position()";

    position testoo(1,'a');
    position ship1(1, 'a');
    position ship2(1, 'b');
    ship st_may1(ship1, ship2);
    cout << "expected 1, actual: " << st_may1.has_position(testoo) << endl;

    position testwo(2,'b');
    position testhe(4,'c');
    position testfr(3,'b');
    position testfv(3,'A');
    position ship3(3, 'b');
    position ship4(3, 'd');
    ship st_may2(ship3, ship4);
    cout << "expected 0, actual: " << st_may2.has_position(testwo) << endl;
    cout << "expected 0, actual: " << st_may2.has_position(testhe) << endl;
    cout << "expected 1, actual: " << st_may2.has_position(testfr) << endl;
    cout << "expected 0, actual: " << st_may2.has_position(testfv) << endl;

    position testvt1(2,'c');
    position testvt2(6,'c');
    position testvt3(6,'e');
    position testvt4(3,'A');
    position ship5(5, 'e');
    Position ship6(7, 'e');
    ship st_may3(ship5, ship6);
    cout << "expected 0, actual: " << st_may3.has_position(testvt1) << endl;
    cout << "expected 0, actual: " << st_may3.has_position(testvt2) << endl;
    cout << "expected 1, actual: " << st_may3.has_position(testvt3) << endl;
    cout << "expected 0, actual: " << st_may3.has_position(testvt4) << endl;
    
cout << "Now testing ship data: ";
Position port(3,'e');
Position bow(3,'h');

    Ship USS_Enterprise(port, bow);

    cout << USS_Enterprise.is_horizontal() << USS_Enterprise.get_size() << endl;

    for (int i = 0; i < 6; i++){
        USS_Enterprise.hit();
        cout << USS_Enterprise.num_hits(); << endl;
    }
    return;
}

void test_player() {

    cout << "testing player.cpp:" << endl;
   cout << "now testing grid" << endl;

   Player::load_grid_file("grid1.txt");
   Player::print_grid();

   cout << "now testing addship" << endl;


    Position ping(0,'a');
    Position pang(0,'e');
    Ship USSDUMY(ping, pang);
   Player::add_ship(USSDUMY);
   cout << "USSDUMY added, now testing number of ships: " << Player::get_num_ships() << endl;

   cout "Now testing Attack hit" << endl;
   Player::attack(opponent&, ping);

    Position poom(1, 'b');
   cout "Now testing Attack hit" <, endl;
   Player::attack(opponent&, poom);

    Player Juan("Captian_Juan-Luke_Picard");

    cout << "Player test: " << Player::get_name(Juan);

    return;
}


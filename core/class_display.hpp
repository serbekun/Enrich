#pragma once

#include <iostream>

// include "game play object"
#include "../classes/class_player.hpp"
#include "../classes/class_shop.hpp"
#include "class_CandleReader.hpp"

using namespace std;

namespace GameCore {

class display {

public:   

    void show_base_info(GamePlayObject::shop shop, GamePlayObject::player player, int round_count) {
        cout << "turn - " << round_count << endl;
        cout << player.get_player_name() << " money - " << player.get_money_value() << endl;
        cout << player.get_player_name() << " strees - " << player.get_stress_value() << endl;
        cout << player.get_player_name() << " pills - " << player.get_pills_value() << endl;
        cout << "1. drink pills" << endl;
        cout << "2. buy pills" << endl;
        cout << ":";
    }

    void massage_before_buy_pills() {
        cout << "have many pills you want buy :";
    }

    void massage_before_buy_wood() {
        cout << "have many wood you want buy :";
    }

    void massage_before_buy_stone() {
        cout << "have many stone you want buy :";
    }

    // funk for tests

    void start_test_message() {
        cout << "===========TEST START===========" << endl;
    }
    
    void show_shop_info(GamePlayObject::shop shop) {
        cout << "shop money - " << shop.get_money_value() << endl;
        cout << "shop ifactive - " << shop.get_shop_ifactive_value() << endl;
        cout << "shop wood - " << shop.get_wood_value() << endl;
        cout << "shop stone -" << shop.get_stone_value() << endl;
        cout << "shop have pills - " << shop.get_have_pills() << endl;
        cout << "shop pills cost - " << shop.get_pills_cost() << endl;
    }

    void show_CandleReader_info(GameCore::CandleReader cr) {
        cout << "world normal money - " << cr.get_normal_world_money() << endl;
    }

    void end_test_message(){
        cout << "============TEST END============" << endl;
    }

};

} // name space

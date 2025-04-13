#pragma once

#include <iostream>

// include "game play object"
#include "../classes/class_player.hpp"
#include "../classes/class_shop.hpp"

using namespace std;

namespace GameCore {

class display {

public:   

    void show_base_info(GamePlayObject::shop shop, GamePlayObject::player player) {
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
};

} // name space

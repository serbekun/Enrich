#pragma once
#include <iostream>

#include "class_player.hpp"

using namespace std;

namespace GameCore {
    class CandleReader;
}

namespace GamePlayObject {

class shop {

private:
    int money;
    int have_pills;
    int pills_cost;
    int wood;
    int stone;
    int shop_ifactive;

public:

    void change_shop_ifactive(GameCore::CandleReader* cr);

    shop() {
        money = 5000;
        have_pills = 100;
        pills_cost = 20;
        wood = 100;
        stone = 100;
        shop_ifactive = 100;    
    }
    
    int get_money_value() const {
        return money;
    }    

    void sell_pills(GamePlayObject::player& person, int have_many_pills_buy) {
        
        if (have_many_pills_buy > have_pills) {
            cout << "you can't buy '" << have_many_pills_buy << "' pills because there isn't that much in the world!!!" << endl;
            return;
        }
        int player_have_money = person.get_money_value();
        int need_money_for_buy = have_many_pills_buy * pills_cost;
        
        if (player_have_money < need_money_for_buy) {
            cout << "you can't byu '" << have_many_pills_buy << "' because you don't have that much money!!!" << endl;
            return;
        }
        
        person.change_money_value(need_money_for_buy);
        person.change_pills_value(have_many_pills_buy);

    }

    void ifactive() {

    }

};

}

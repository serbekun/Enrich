#pragma once
#include <iostream>
#include <cmath>

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

    int get_wood_value() const {
        return wood;
    }

    int get_stone_value() const {
        return stone;
    }

    int get_shop_ifactive_value() const {
        return shop_ifactive;
    }

    int get_have_pills() const {
        return have_pills;
    }

    int get_pills_cost() const {
        return pills_cost;
    }
    
    void change_money_value(int change_value) {
        this->money += change_value;
    }

    void change_wood_value(int change_value) {
        this->wood += change_value;
    }

    void change_stone_value(int change_value) {
        this->stone += change_value;
    }

    void sell_pills(GamePlayObject::player& person, int have_many_pills_buy) {
        
        if (have_many_pills_buy > have_pills) {
            cout << "you can't buy '" << have_many_pills_buy << "' pills because there isn't that much in the world!!!" << endl;
            cout << "you can buy only '" << have_pills << "' pills" << endl;
            return;
        }
        int person_have_money = person.get_money_value();
        int need_money_for_buy = have_many_pills_buy * pills_cost;
        
        if (person_have_money < need_money_for_buy) {
            cout << "you can't byu '" << have_many_pills_buy << "' because you don't have that much money!!!" << endl;
            int can_buy_pills = person_have_money / pills_cost;
            cout << "you can buy only '" << floor(can_buy_pills) << "' pills with exist money" << endl;
            return;
        }
        
        this->money += need_money_for_buy;
        this->have_pills -= have_many_pills_buy;
        need_money_for_buy *= -1;
        person.change_money_value(need_money_for_buy);
        person.change_pills_value(have_many_pills_buy);

    }

    void sell_wood(GamePlayObject::player person, int have_many_wood_buy) {

        if (have_many_wood_buy > wood) {
            cout << "you can't buy '" << have_many_wood_buy << "' because there isn't that much in the world!!!" << endl;
            cout << "you can buy only '" << stone << "' wood" << endl;
            return;
        }




    }

    void ifactive() {

    }

};

}

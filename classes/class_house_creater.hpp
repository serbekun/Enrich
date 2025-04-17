#pragma once

#include <iostream>

#include "class_player.hpp"
#include "../utils/class_house_create_utils.hpp"

namespace GamePlayObject {

class HouseCreater {

    private:
        int house_start_create_cost;
        int can_house_create;
        int wood;
        int wood_cost;
        int stone;
        int stone_cost;
        int money;
        float ifactive;

    public:

        HouseCreater() {
            house_start_create_cost = 2500;
            can_house_create = 13;
            wood = 1000;
            wood_cost = 20;
            stone = 500;
            stone_cost = 50;
            money = 12400;
            ifactive = 5.0;
        }

        ~HouseCreater() = default;

        void create_house_for_person(GamePlayObject::player& person, int have_many_house_create) {

            const int house_cost = 70;

            if (can_house_create < have_many_house_create) {
                cout << "you can't create '" << have_many_house_create << "' houses because there isn't that much" << endl;
                cout << "you can buy only '" << can_house_create << "'" << endl;
                return;
            }

            int person_have_money = person.get_money_value();
            int need_money_for_buy = ClassHouseUtils::candle_have_many_money_need_to_create_house(person_have_money, wood, stone, wood_cost, stone_cost, have_many_house_create);

            if (person_have_money < need_money_for_buy) {
                cout << "you don't have so many money for buy '" << have_many_house_create << "'" << endl;
                int can_create_house = person_have_money / house_cost;
                cout << "you can buy only '" << floor(can_house_create) << "' pills with exist money" << endl;
                return;
            }

            person.change_money_value(need_money_for_buy);
            person.change_have_house_value(have_many_house_create);

        }
};



}
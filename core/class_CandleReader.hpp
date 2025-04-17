#pragma once

#include <iostream>
#include "../classes/class_player.hpp"
#include "../classes/class_shop.hpp"

using namespace std;

namespace GameCore {

class CandleReader
{
private:
    int normal_world_money;
    int normal_world_product;
public:
    CandleReader() : normal_world_money(0), normal_world_product(0) {}

    ~CandleReader() = default;

    void set_normal_world_money(const GamePlayObject::player& person1_obj,
        const GamePlayObject::shop& shop_obj) {
        normal_world_money = person1_obj.get_money_value() + shop_obj.get_money_value();
    }
    
    int get_normal_world_money() const {
        return normal_world_money;
    }

    int get_person_salary(GamePlayObject::player person) {

        int person_salary;
        

        return person_salary;
    }

};

}
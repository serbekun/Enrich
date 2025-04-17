#pragma once

#include <iostream>

namespace ClassHouseUtils {

    int candle_have_many_money_need_to_create_house(
        int person_have_money,
        int wood, int stone,
        int wood_cost, int stone_cost,
        int have_many_house_create
    ) {
        const int wood_need = 20;
        const int stone_need = 5;
    
        int total_wood_needed = wood_need * have_many_house_create;
        int total_stone_needed = stone_need * have_many_house_create;
    
        int need_money = (total_wood_needed * wood_cost) + (total_stone_needed * stone_cost);
    
        return need_money;
    }
    



}
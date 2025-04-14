#pragma once

#include <iostream>
#include "../classes/class_player.hpp"
#include "../classes/class_shop.hpp"

using namespace std;

namespace GameCore {#pragma once

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

    void set_normal_world_money(const GamePlayObject::player& player_obj,
        const GamePlayObject::shop& shop_obj) {
        normal_world_money = player_obj.get_money_value() + shop_obj.get_money_value();
    }
    
    int get_normal_world_money() const {
        return normal_world_money;
    }
};

}

class CandleReader
{
private:
    int normal_world_money;
    int normal_world_product;
public:
    CandleReader() : normal_world_money(0), normal_world_product(0) {}

    ~CandleReader() = default;

    void set_normal_world_money(const GamePlayObject::player& player_obj,
        const GamePlayObject::shop& shop_obj) {
        normal_world_money = player_obj.get_money_value() + shop_obj.get_money_value();
    }
    
    int get_normal_world_money() const {
        return normal_world_money;
    }
};

}

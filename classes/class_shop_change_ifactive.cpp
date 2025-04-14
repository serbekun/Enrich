#pragma once

#include "class_shop.hpp"
#include "../core/class_CandleReader.hpp"

using namespace std;
using namespace GamePlayObject;

void shop::change_shop_ifactive(GameCore::CandleReader* cr) {
    int world_normal_money = cr->get_normal_world_money();
    int coefficient = world_normal_money / money;
    this->shop_ifactive = coefficient;
}
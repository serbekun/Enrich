#include <iostream>
#include <../classes/class_player.hpp>
#include <../classes/class_shop.hpp>

namespace GameCore {

class CandleReader
{
private:
    int normal_world_money;
    int normal_world_product;
public:
    CandleReader() = default;

    ~CandleReader() = default;

    void set_normal_world_money(player player_obj, shop shop_obj) {
        normal_world_money = player_obj.money + shop_obj.money;
    }

    int get_normal_world_money() {
        return normal_world_money;
    }

};

}
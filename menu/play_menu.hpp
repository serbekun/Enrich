#pragma once

#include <iostream>
#include <string>

// Include game play classes
#include "../classes/class_player.hpp"
#include "../classes/class_shop.hpp"
#include "../classes/class_shop_change_ifactive.cpp"
#include "../classes/class_house_creater.hpp"

// Include game core
#include "../core/class_CandleReader.hpp"
#include "../core/class_display.hpp"
#include "../core/class_getter.hpp"
#include "../core/class_LimitCater.hpp"

using namespace std;

namespace Menus
{

    void play_menu(bool test_mod, string player_name)
    {
        // init game play object classes
        GamePlayObject::player player;
        GamePlayObject::shop shop;
        GamePlayObject::HouseCreater house_creater;

        // init core classes
        GameCore::CandleReader candle_reader;
        GameCore::display display;
        GameCore::getter getter;
        GameCore::LimitCater limit_cater;

        // init value
        int round_count = 0;
        string player_input;
        player.set_player_name(player_name);

        while (1)
        {

            // core need action
            candle_reader.set_normal_world_money(player, shop);
            limit_cater.cat_person_limit(player);

            // player need action
            player.up_loss_pills_ifactive(round_count);

            // shop need action
            shop.change_shop_ifactive(&candle_reader);

            // game play menu
            display.show_base_info(shop, player, round_count);
            player_input = getter.get_string_value();

            if (test_mod == 1) {
                display.start_test_message();
                display.show_shop_info(shop);
                display.show_CandleReader_info(candle_reader);
                display.end_test_message();
            }

            /*
            1. drink pills
            2. buy pills
            3. buy wood
            4. buy stone
            5. create house
            */

            if (player_input == "1")
            {
                player.drink_pills();
            }
            if (player_input == "2")
            {
                display.massage_before_buy_pills();
                shop.sell_pills(player, getter.get_int_value());
            }
            if (player_input == "3") 
            {
                display.massage_before_buy_wood();
                shop.sell_wood(player, getter.get_int_value());
            }
            if (player_input == "4") 
            {
                display.massage_before_buy_stone();
                shop.sell_stone(player, getter.get_int_value());
            }
            if (player_input == "5")
            {
                display.massage_before_create_house();
                house_creater.create_house_for_person(player, getter.get_int_value());
            }

            round_count++;
        }
    }

}

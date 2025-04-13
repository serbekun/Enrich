#pragma once

#include <iostream>

// Include game play classes
#include "../classes/class_player.hpp"
#include "../classes/class_shop.hpp"
#include "../classes/class_shop_change_ifactive.cpp"

// Include game core
#include "../core/class_CandleReader.hpp"
#include "../core/class_display.hpp"
#include "../core/class_getter.hpp"
#include "../core/class_LimitCater.hpp"

namespace Menus {

void play_menu() {
        // init game play object classes
        GamePlayObject::player player;
        GamePlayObject::shop shop;
        
        // init core classes
        GameCore::CandleReader candle_reader;
        GameCore::display display;
        GameCore::getter getter;
        GameCore::LimitCater limit_cater;
        
        // init value
        int round_count = 0;
        string player_input;
    
        while(1) {
    
            // core need action
            candle_reader.set_normal_world_money(player, shop);
            limit_cater.cat_person_limit(player);
        
            // player need action
            player.up_loss_pills_ifactive(round_count);

            // shop need action
            shop.change_shop_ifactive(&candle_reader);
    
            // game play menu
            display.show_base_info(shop, player);
            player_input = getter.get_string_value();
            
            /*
            1. drink pills
            2. buy pills
            */
    
            if (player_input == "1") {
                player.drink_pills();
            }
            if (player_input == "2") {
                display.massage_before_buy_pills();
                shop.sell_pills(player, getter.get_int_value());
            }
    
            round_count++;
        }
}

}
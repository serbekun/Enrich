#pragma once

#include <iostream>
#include "../classes/class_player.hpp"


namespace GameCore {

class LimitCater {

private:
    const short max_player_health = 100;
    const short min_player_health = 0;
    const short max_player_stress = 100;
    const short min_player_stress = 0;

public:
    
    void cat_person_limit(GamePlayObject::player& person) {

        // init value for check hear
        int person_stress = person.get_health_value();
        int person_health = person.get_stress_value();

        // cat stress limit
        if (person_stress > max_player_stress) {
            person.change_stress_value_almost(max_player_stress);
        }
        if (person_stress < min_player_stress) {
            person.change_stress_value_almost(min_player_stress);
        }

        // cat health limit
        if (person_health > max_player_health) {
            person.change_health_value_almost(max_player_health);
        }
        if (person_health < min_player_health) {
            person.change_health_value_almost(min_player_health);
        }
    }
};

}

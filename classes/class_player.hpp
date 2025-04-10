#include <iostream>
#include <string>

using namespace std;

namespace game_class {

class player {

private:
    string name;
    int money;
    int health;
    int stress; // min 0% max 100%
    int pills;
    int pills_ifactive;
public:

    player() {
        money = 25000;
        health = 100;
        stress = 0;
        pills = 2;
    }

    void set_player_name(const string *set_name) {
        name = *set_name;
    }

    void up_loss_pills_ifactive(int round_count) {
        if (round_count % 10 == 0) {
            pills_ifactive += 2;
        }
        
    }

    void loss_pills_ifactive() {
        pills_ifactive /= 2;
        int minimizer = pills_ifactive /= 2;
        pills_ifactive += minimizer;
    }

    void drink_pills() {
        pills--;
        stress -= pills_ifactive;
        loss_pills_ifactive();
    }

    


};

}
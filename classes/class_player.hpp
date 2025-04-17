#pragma once
#include <iostream>

using namespace std;

namespace GamePlayObject {

class player {

private:

    string name;
    int money;
    int health;
    int stress; // min 0% max 100%
    int wood;
    int stone;
    int pills;
    int pills_ifactive;
    int have_house;
    int house_income;

public:
    
    player() {
        name = "player";
        money = 25000;
        health = 100;
        stress = 0;
        wood = 0;
        stone = 0;
        pills = 2;
        pills_ifactive = 100;
        have_house = 2;
        house_income = 10;
    }

    int get_money_value() const {
        return money;
    }

    int get_pills_value() const {
        return pills;
    }

    int get_stress_value() const {
        return stress;
    }

    int get_health_value() const {
        return health;        
    }

    int get_wood_value() const {
        return wood;
    }

    int get_stone_value() const {
        return stone;
    }

    int get_have_house_value() {
        return have_house;
    }

    int get_house_income() {
        return house_income;
    }

    string get_player_name() {
        return name;
    }

    void change_money_value(int change_value) {
        this->money += change_value;
    }

    void change_money_value_almost(int change_value) {
        this->money = change_value;
    }

    void change_pills_value(int change_value) {
        this->pills += change_value;
    }

    void change_stress_value(int change_value) {
        this->stress += change_value;
    }

    void change_stress_value_almost(int change_value) {
        this->stress = change_value;
    }

    void change_health_value(int change_value) {
        this->health += change_value;
    }

    void change_wood_value(int change_value) {
        this->wood += change_value;
    }
    
    void change_stone_value(int change_value) {
        this->stone += change_value;
    }

    void change_wood_value_almost(int change_value) {
        this->wood = change_value;
    }

    void change_stone_value_almost(int change_value) {
        this->stone = change_value;
    }

    void change_health_value_almost(int change_value) {
        this->health = change_value;
    }

    void change_have_house_value(int change_value) {
        this->have_house += change_value;
    }

    void change_have_house_value_almost(int change_value) {
        this->have_house = change_value;
    }

    void change_house_incomde_value(int change_value) {
        this->house_income += change_value;
    }

    void change_house_income_value_almost(int change_value) {
        this->house_income = change_value;
    }

    void set_player_name(const string set_name) {
        this->name = set_name;
    }

    void up_loss_pills_ifactive(int round_count) {
        if (round_count % 10 == 0) {
            this->pills_ifactive += 2;
        }
    }

    void loss_pills_ifactive() {
        pills_ifactive /= 2;
        int minimizer = pills_ifactive / 2;
        this->pills_ifactive += minimizer;
    }

    void drink_pills() {
        if (pills <= 0) {
            cout << "you can't drink pills because you don't have pills!!!" << endl;
            return;
        }
        this->pills--;
        this->stress -= pills_ifactive;
        loss_pills_ifactive();
    }
    
};

}

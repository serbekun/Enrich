#include <iostream>
#include <class_unit.hpp>

using namespace std;

namespace stdx {

class kingdom {

public:
    int pointers;
    short reputation;
    int population;
    int money;
    int resource_food;
    int resource_wood;
    int resource_stone;
    int resource_metal;
    bool leave;

private:

    kingdom () {
        pointers = 0;
        reputation = 80;
        population = 25000;
        money = 10000;
        resource_food = 1000;
        resource_wood = 1000;
        resource_stone = 1000;
        resource_metal = 1000;
        leave = 1;
    }

    void show_status() {
        cout << "Kingdom pointers - '" << pointers << "'" << endl;
        cout << "Kingdom money - '" << money << "'" << endl;
        cout << "Kingdom reputation - '" << reputation << endl;
        cout << "Kingdom population - '" << population << endl;
        cout << "resource :" << endl;
        cout << "food - '" << resource_food << "'" << endl;
        cout << "wood - '" << resource_wood << "'" << endl;
        cout << "stone - '" << resource_stone << "'" << endl;
        cout << "metal - '" << resource_metal << "'" << endl;
    }

    void get_taxes() {
        int taxes_people = population / 10;
        money += taxes_people * 3;
    }

    void create_warrior() {
        

    }


};

}
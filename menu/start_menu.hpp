#pragma once

#include <iostream>
#include "play_menu.hpp"

using namespace std;

namespace Menus {

void start_menu() {

    short input;

    while(1) {
    cout << "==========MENU==========" << endl;
    cout << "1. start" << endl;
    cout << "2. credits" << endl;
    cout << "3. exit" << endl;
    cout << "select option :";

    cin >> input;
    
    if (input == 1) {
        cout << "==========START==========" << endl;
        Menus::play_menu();
    } else if (input == 2) {
        cout << "director - Mishcenko Sergey" << endl;
        cout << "author - Mishenko Sergey" << endl;
        cout << "code - Mishcenko Sergey" << endl;
    } else if (input == 3) {
        return;
    }

    }

}

}
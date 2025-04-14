#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include "play_menu.hpp"

using namespace std;

namespace Menus {

void start_menu(bool test_mod) {
    string input_str;
    short input;

    while (true) {
        cout << "==========MENU==========" << endl;
        cout << "1. Start" << endl;
        cout << "2. Credits" << endl;
        cout << "3. Exit" << endl;
        cout << "Select option: ";

        getline(cin, input_str);

        if (input_str.empty()) {
            cout << "Nothing entered. Please enter a number from 1 to 3." << endl;
            continue;
        }

        stringstream ss(input_str);
        if (!(ss >> input) || !ss.eof()) {
            cout << "Invalid input. Please enter a number from 1 to 3." << endl;
            continue;
        }

        switch (input) {
            case 1:
                cout << "==========START==========" << endl;
                Menus::play_menu(test_mod);
                break;

            case 2:
                cout << "Director - Mishcenko Sergey" << endl;
                cout << "Author - Mishenko Sergey" << endl;
                cout << "Code - Mishcenko Sergey" << endl;
                break;

            case 3:
                return;

            default:
                cout << input << " - Unknown option." << endl;
                break;
        }
    }
}

}

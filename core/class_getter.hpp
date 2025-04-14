#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace GameCore {

class getter {

public:

    int get_int_value() {
        int get_value;
        cin >> get_value;
        return get_value;
    }

    string get_string_value() {
        string get_value;
        getline(cin, get_value);
        return get_value;
    }

};

}
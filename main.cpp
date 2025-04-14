#include <iostream>
#include "menu/start_menu.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    bool test_mod = false;

    if (argc > 1 && std::string(argv[1]) == "test") {
        test_mod = true;
        cout << "===TEST MOD ACTIVATED===" << endl;
    }

    Menus::start_menu(test_mod);

    return 0;
}

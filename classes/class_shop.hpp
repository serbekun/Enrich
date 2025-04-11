#include <iostream>

namespace GamePlayObject {

class shop {

private:
    int money;
    int have_pills;
    int wood;
    int stone;
    int shop_ifactive;

public:
    
    int get_money_value() const {
        return money;
    }    

    void change_shop_ifactive() {
        if (money > 10) {

        } 
    }


    void ifactive() {

    }

};

}
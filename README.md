### enrich
'enrich' is game where use many oop
i make this project for lerning c++ and oop

for compile
```sh
g++ -o /Release/enrich main.cpp
```
for start
```sh
./Release/enrich
```
for start wiht test mod
```sh
./Release/enrich test
```
project structure
```
.
│
├── /Release                                # folder with compiled file
│   └── enrich                              # bin file project
├── /classes                                # folder with game_play_object
│   ├── class_player.hpp                    # class player for include to main.cpp
│   ├── class_shop.hpp                      # class shop for include to main.cpp
│   └── class_shop_change_ifactive.cpp      # class shop with function for change sho ifactive exist because include class_CandleReader.hpp for include main.cpp
├── /core                                   #
│   ├── class_CandleReader.hpp              #
│   ├── class_LimitCater.hpp                #
│   ├── class_display.hpp                   #
│   └── class_getter.hpp                    #
├── /menu                                   #
│   ├── play_menu.hpp                       #
│   └── start_menu.hpp                      #
├── main.cpp                                # main file compile this
├── README.md                               # readme file


```

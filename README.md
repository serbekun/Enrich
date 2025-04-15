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
├── /core                                   # folder with game core for include to main.cpp 
│   ├── class_CandleReader.hpp              # class candle reader need for set game normal value
│   ├── class_LimitCater.hpp                # class limit caater need for cat limit all class
│   ├── class_display.hpp                   # class display need for show all game interfais
│   └── class_getter.hpp                    # class geter need for player can type info to game
├── /menu                                   # folder with program with call all other option
│   ├── play_menu.hpp                       # main play menu conect class folder and core folder
│   └── start_menu.hpp                      # start menu have option and start
├── main.cpp                                # main file compile this
├── README.md                               # readme file
```

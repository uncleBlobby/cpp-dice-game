#include <iostream>

class Player {
    public: 
    std::string name;
    int roll;
    int score = 0;
    Player(std::string x){
        name = x;
    }
};
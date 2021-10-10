#include <stdlib.h>

class Dice {
    public:
    int sides = 6;
    int roll() {
        return rand() % 6 + 1;
    } 
};
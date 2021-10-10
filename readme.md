# :game_die: CPP-DICE-GAME :game_die:

Simple exercise in C++ to help understand basic concepts.  In this game you roll a 6 sided dice against an opponent 1,000,000 times.  Whoever rolls the higher number more times WINS!


#### CONCEPTS

C++ Classes (Dice, Player)

time.h - to seed pseudo-random number generator

stdlib.h - pseudo-random function rand()

time_t - using time_t object


## Instructions

#### Clone or Fork repo to local directory.
#### Compile main.cpp to executable binary.
    `g++ main.cpp -o main`
#### Run binary.
    `./main`

## Performance
    App will run 1,000,000 turns in about 11 seconds on my machine (with logs each turn).
    App will run 1,000,000 turns in less than 1 second on my machine (with logs only at end of match).

## TO-DO
    User-input prompts for number of turns desired, option for logs.
    User-input prompt to change number of sides per dice roll.
    EPIC loot-boxes and paid DLC.
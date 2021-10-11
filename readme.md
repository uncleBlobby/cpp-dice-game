# :game_die: CPP-DICE-GAME :game_die:

Simple exercise in C++ to help understand basic concepts.  In this game you roll a 6 sided die against a *blazingly-fast* opponent 1,000,000 times.  Whoever rolls the higher number more times WINS!


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

    1,000,000 (logs) ~~ 11 seconds
    1,000,000 (no logs) ~~ 1 second

    1,000,000,000 (logs) ~~ TBD
    1,000,000,000 (no logs) ~~ 33 seconds

## TO-DO

    - Option for logs.
    - GET MORE PRECISE TIME lol :microscope:
    - Option for history. ***
    - User-input prompt to change number of sides per dice roll.
    - Find out how long it takes to run 1,000,000,000 turns (with || without logs)
        -- 33 seconds without logs...
        -- x with logs (I gave up to save my CPU)...
            -- need to install sensors to monitor temp
            -- need to close all other apps while attempting :nerd_face:
    - multithreading
    - EPIC loot-boxes and paid DLC.
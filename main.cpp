#include <time.h>
#include "dice.h"
#include "player.h"

using namespace std;

int main () {
    time_t startTime;
    time(&startTime);
    time_t endTime;
    Dice dice;
    Player player("Player");
    Player opponent("Opponent");

    srand (time(NULL));

    for(int i = 0; i < 1000000; i++){
        player.roll = dice.roll();
        opponent.roll = dice.roll();
        cout << "You rolled: " << player.roll << endl;
        cout << "Opponent rolled: " << opponent.roll << endl;

        if(player.roll > opponent.roll){
            cout << "You win this round." << endl;
            player.score += 1;
        }
        if(player.roll < opponent.roll){
            cout << "Opponent wins this round." << endl;
            opponent.score += 1;
        }
        if(player.roll == opponent.roll){
            cout << "It's a draw." << endl;
        }
    }

    if(player.score > opponent.score){
        cout << "You win the match!" << endl;
        cout << "Your score: " << player.score << endl;
        cout << "Opponent score: " << opponent.score << endl;
    }

    if(player.score < opponent.score){
        cout << "You lose the match!" << endl;
        cout << "Opponent score: " << opponent.score << endl;
        cout << "Your score: " << player.score << endl;
    }

    if(player.score == opponent.score){
        cout << "WOW! It's a draw!" << endl;
    }

    time(&endTime);
    double seconds = difftime(endTime, startTime);
    cout << "Game took: " << seconds << " seconds." << endl;

    return 0;
}
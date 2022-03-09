// Practical 2: Rock, Paper, Scissors
// Referee Interface
// A1780385 

#ifndef REFEREE_H
#define REFEREE_H

#include "Human.h"
#include "Computer.h"

class Referee{

    public:
    Referee();
    char refGame(Human player1, Computer player2);
    // returns the outcome for Player 1: 'W', 'L' or 'T' (Win, Lose, Tie)
};

#endif // REFEREE_H
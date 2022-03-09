// Practical 2: Rock, Paper, Scissors
// Game Controller
// A1780385 

#include <iostream>

#include "Referee.h"
#include "Computer.h"
#include "Human.h"

int main(){

    Human player1;
    Computer player2;
    Referee result;

    std::cout << result.refGame(player1, player2);

    return 0;
}
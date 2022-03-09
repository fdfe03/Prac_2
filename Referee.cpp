// Practical 2: Rock, Paper, Scissors
// Referee Function
// A1780385 

#include <iostream>
#include "Referee.h"

using namespace std;

Referee::Referee(){
}


char Referee::refGame(Human player1, Computer player2){
    char r;
    char playerMove = player1.makeMove();
    char compMove = player2.makeMove();

    if (playerMove == 'R')
    {
        switch (compMove)
        {
        case 'R':
        r = 'T';
        break;

        case 'P':
        r = 'L';
        break;
    
        case 'S':
        r = 'P';
        break;
        }
    }

    if (playerMove == 'P')
    {
        switch (compMove)
        {
        case 'R':
        r = 'W';
        break;

        case 'P':
        r = 'T';
        break;
    
        case 'S':
        r = 'L';
        break;
        }
    }

    if (playerMove == 'S')
    {
        switch (compMove)
        {
        case 'R':
        r = 'L';
        break;

        case 'P':
        r = 'W';
        break;
    
        case 'S':
        r = 'T';
        break;
        }
    }

    return r;
}
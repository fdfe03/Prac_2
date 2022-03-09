// Practical 2: Rock, Paper, Scissors
// Human Player Function
// A1780385 

#include <iostream>
#include "Human.h"
using namespace std;

Human::Human(){
}

char Human::makeMove(){
    char player1;
    cout << "Enter Move: " << endl;
    cin >> player1;

    return player1;
}
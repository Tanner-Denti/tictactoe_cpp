//
// Created by tanth on 10/4/2022.
//

using namespace std;
#include <string>
#include <iostream>
#include "GameBoard.h"


GameBoard::GameBoard() {
    turnCounter = 0;
    nextPosition = 1;
}

void GameBoard::updateOpenPositions(int number){
    int index = number;
    index -= 1;
    string letter;
    if ((turnCounter % 2) + 1 == 1)
    {
        letter = "X";
    } else {
        letter = "O";
    }
    openPositions[index] = letter;
}

void GameBoard::printGameBoard() const {
    cout << openPositions[0] << "|" << openPositions[1] << "|" << openPositions[2] << endl;
    cout << "-----" << endl;
    cout << openPositions[3] << "|" << openPositions[4] << "|" << openPositions[5] << endl;
    cout << "-----" << endl;
    cout << openPositions[6] << "|" << openPositions[7] << "|" << openPositions[8] << endl;
}

void GameBoard::updateTurnCounter(){
    turnCounter += 1;
}

bool GameBoard::checkWinCondition(){

    if ((openPositions[0] == openPositions[1] && openPositions[1] == openPositions[2]) ||
        (openPositions[6] == openPositions[7] && openPositions[7] == openPositions[8]) ||
        (openPositions[0] == openPositions[3] && openPositions[3] == openPositions[6]) ||
        (openPositions[2] == openPositions[5] && openPositions[5] == openPositions[8]) ||
        (openPositions[0] == openPositions[4] && openPositions[4] == openPositions[8]) ||
        (openPositions[2] == openPositions[4] && openPositions[4] == openPositions[6]) ||
        (openPositions[1] == openPositions[4] && openPositions[4] == openPositions[7]) ||
        (openPositions[3] == openPositions[4] && openPositions[4] == openPositions[5]))
    {
        return true;
    } else {
        return false;
    }
}
//
// Created by tanth on 10/4/2022.
//

using namespace std;
#include <string>
#include <iostream>
#include "Director.h"
#include "GameBoard.h"

namespace Game {
};

Director::Director(){
    isPlaying = true;
}

void Director::start() {
    GameBoard board;
    cout << "It's time to play tic tac toe! Player 1, please enter the square number where you would like to go first." << endl;
    board.printGameBoard();

    while (isPlaying) {
        input(board);
        update(board);
        output(board);
    }

}

void Director::input(GameBoard &board) {
    int x;

    cout << "Player " << (board.turnCounter % 2) + 1  << ":" << endl;
    cin >> x;
    board.nextPosition = x;

}

void Director::update(GameBoard &board) {
    board.updateOpenPositions(board.nextPosition);
    board.updateTurnCounter();
    if (board.checkWinCondition()) {
        isPlaying = false;
    }

}

void Director::output(GameBoard &board) {
    board.printGameBoard();
    if (!isPlaying){
        board.turnCounter += 1;
        cout << "Player: " << (board.turnCounter % 2) + 1 << " wins!" << endl;
    } else if (board.turnCounter > 8){
        isPlaying = false;
        cout << "It's a draw!";
    }
}
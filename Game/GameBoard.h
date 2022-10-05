//
// Created by tanth on 10/4/2022.
//

#ifndef MODULE_ONE_CPP_GAMEBOARD_H
#define MODULE_ONE_CPP_GAMEBOARD_H


class GameBoard
{
    public:
        string openPositions[9] ={"1", "2","3","4","5","6","7","8","9"};
        int turnCounter;
        int nextPosition;
        GameBoard();
        void updateOpenPositions(int number);
        void printGameBoard() const;
        void updateTurnCounter();
        bool checkWinCondition();
};


#endif //MODULE_ONE_CPP_GAMEBOARD_H

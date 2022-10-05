//
// Created by tanth on 10/4/2022.
//

#ifndef MODULE_ONE_CPP_DIRECTOR_H
#define MODULE_ONE_CPP_DIRECTOR_H

using namespace std;
#include <string>
#include <iostream>
#include "GameBoard.h"

class Director
{
    public:
        Director();
        void start();
    private:
        bool isPlaying;
        void input(GameBoard &board);
        void update(GameBoard &board);
        void output(GameBoard &board);
};

#endif //MODULE_ONE_CPP_DIRECTOR_H

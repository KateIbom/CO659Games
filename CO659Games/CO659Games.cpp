// CO659Games.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Game.h"
#include <iostream>

int main()
{
    srand(time(NULL)); // random numbers

    std::cout << "CO650 OOP Game \n";

    Game game;

    game.StartGame();

    while (game.getPlaying())
    {
        game.RunMenu();
    }

    return 0;
}


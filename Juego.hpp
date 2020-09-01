#include <iostream>
#include <vector>
#include "Tablero.hpp"
using namespace std;

#pragma once

class Juego : public Tile

{
   private:


public:
    vector<string> game;

    void makeGame(int numTiles,int serpTiles, int ladTiles){
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;


    while (c1 < numTiles)
    {

        if (c2 < serpTiles && c1 >= 3){

            game.push_back("S");
            c2++;
            c1++;
        }

         game.push_back("N");
        c1++;

        if (c3 < ladTiles && c1 >= 3){

            game.push_back("L");
            c3++;
            c1++;
        }


    }


    }


};


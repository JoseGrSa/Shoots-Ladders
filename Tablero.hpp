#include <iostream>
#include <vector>
using namespace std;

#pragma once

class Tile
{
private:

    int numTiles;
    int serpTiles;
    int ladTiles;
    string typeTiles[300];


public:

    int getNum(){return numTiles;}
    int getSerp(){return serpTiles;}
    int getLad(){return ladTiles;}

    void setNum(){
    int tablero;
    cout << endl << "How many tiles would you like the board to have? (It is highly recommended to type more than 10" << endl;
    cin >> tablero;
    numTiles = tablero;

    }

    void setSerp(){
    int serpientes;
    cout << endl << "How many Serpent Tiles would you like the board to have? " << endl;
    cin >> serpientes;
    serpTiles = serpientes;

    }
    void setLad(){
    int escaleras;
    cout << endl << "How many Ladder Tiles? would you like the board to have" << endl;
    cin >> escaleras;
    ladTiles = escaleras;

    }

    virtual void  makeGame(int numTiles,int serpTiles, int ladTiles) = 0;


};




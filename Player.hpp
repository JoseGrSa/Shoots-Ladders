#include <iostream>

class Player : public Juego

{
private:
    int position;
    int id;

public:


    Player(int position, int id)
    {

    this->position = position;
    this->id = id;

    }

     int getPlayer(){return id;}
     int getPos(){return position;}
     int setPos(int change)
     {
         position = position+change;
     }




};



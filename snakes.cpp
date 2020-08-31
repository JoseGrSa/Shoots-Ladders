#include "Juego.hpp"
#include "Player.hpp"
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){

string gametype;
vector<Player> players;
vector<int> randomgen;
int num_of_players = 0;
int c4 = 1;
int c5 = 0;
int c6 = 0;
int i = 0;
Juego jueg1;
int prize;
int punish;
int turns;
srand(time(NULL));



cout <<

" _______  __   __  _______  _______  _______  _______    _______  __    _  ______     ___      _______  ______   ______   _______  ______    _______ \n"
"|       ||  | |  ||       ||       ||       ||       |  |   _   ||  |  | ||      |   |   |    |   _   ||      | |      | |       ||    _ |  |       |\n"
"|  _____||  |_|  ||   _   ||   _   ||_     _||  _____|  |  |_|  ||   |_| ||  _    |  |   |    |  |_|  ||  _    ||  _    ||    ___||   | ||  |  _____|\n"
"| |_____ |       ||  | |  ||  | |  |  |   |  | |_____   |       ||       || | |   |  |   |    |       || | |   || | |   ||   |___ |   |_||_ | |_____ \n"
"|_____  ||       ||  |_|  ||  |_|  |  |   |  |_____  |  |       ||  _    || |_|   |  |   |___ |       || |_|   || |_|   ||    ___||    __  ||_____  |\n"
" _____| ||   _   ||       ||       |  |   |   _____| |  |   _   || | |   ||       |  |       ||   _   ||       ||       ||   |___ |   |  | | _____| |\n"
"|_______||__| |__||_______||_______|  |___|  |_______|  |__| |__||_|  |__||______|   |_______||__| |__||______| |______| |_______||___|  |_||_______|\n" << endl;










cout << endl << "Welcome to Shoots and Ladders!!! by Jose Granger Salgado - A01023661" << endl;
cout << endl << "Please select a Gamemode, type m for manual where you can select your preferred parameters for the game, or type a for automatic, where all the parameters will be preselected :" << endl;
cin >> gametype;

if (gametype == "m")
{

jueg1.setNum();
jueg1.setSerp();
jueg1.setLad();

jueg1.makeGame(jueg1.getNum(),jueg1.getSerp(),jueg1.getLad());

cout << endl << "The board has been made according to your preferences: " << endl;

while (i < jueg1.getNum()){
    cout << jueg1.game[i];
    i++;

}



cout << endl << "The size of the board is: " << jueg1.game.size() << endl;


cout << endl << "How many players would you like your game to have? " << endl;
cin >> num_of_players;

while (c4 <= num_of_players){

   players.push_back(Player(0,c4));
   c4++;
   randomgen.push_back(rand() % 3+1);


}

cout << endl << "The players have been created" << endl;

cout << endl << "Just a few more parameters to select!!" << endl;

cout << endl << "How punishing would you like the the S tiles to be? (It is highly recommended to choose a number between 0 and 3)" << endl;
cin >> punish;

cout << endl << "How rewarding would you like the the L tiles to be? (It is highly recommended to choose a number between 0 and 3)" << endl;
cin >> prize;

cout << endl << "Finally, how many turns would you like the game to have? " << endl;
cin >> turns;


while (c5 < turns)
{

    while (c6 < num_of_players){

     if (players[c6].getPos() >= jueg1.getNum())
    {

        cout << "Player " << players[c6].getPlayer() << " Is the winner! ";
        c5 = turns;
        break;
    }



    else
    {

            cout << "Player " << players[c6].getPlayer()<< " position is " << players[c6].getPos() << " Which is a "<< jueg1.game[players[c6].getPos()] << endl;
            if (jueg1.game[players[c6].getPos()] == "N"){players[c6].setPos(randomgen[c6]);}
            else if (jueg1.game[players[c6].getPos()] == "S"){players[c6].setPos(-punish);}
            else if (jueg1.game[players[c6].getPos()] == "L"){players[c6].setPos(prize);}
            c6++;


    }


                                }


c5++;
c6 = c6-num_of_players;

}

cout << endl <<  "The game has ended / run out of turns ";

}

else if (gametype == "a")
{

    jueg1.makeGame(30,4,5);

cout << endl << "Board created: " << endl;
    while (i < jueg1.getNum()){
    cout << jueg1.game[i];
    i++;

}

cout << endl << "Creating 4 players: " << endl;
    while (c4 <= 4){

   players.push_back(Player(0,c4));
   c4++;
   randomgen.push_back(rand() % 3+1);
    ;}

    int punish = 2;
    int prize = 2;
    int turns = 100;

    while (c5 < turns)
{

    while (c6 < 4){

     if (players[c6].getPos() >= 30)
    {

        cout << "Player " << players[c6].getPlayer() << " Is the winner! ";
        c5 = turns;
        break;
    }



    else
    {

            cout <<  "Player " << players[c6].getPlayer()<< " position is " << players[c6].getPos() << " Which is a "<< jueg1.game[players[c6].getPos()] << endl;
            if (jueg1.game[players[c6].getPos()] == "N"){players[c6].setPos(randomgen[c6]);}
            else if (jueg1.game[players[c6].getPos()] == "S"){players[c6].setPos(-punish);}
            else if (jueg1.game[players[c6].getPos()] == "L"){players[c6].setPos(prize);}
            c6++;


    }


                                }


c5++;
c6 = c6-4;

}


}

else
    {
    cout << "Wrong input, please try again";
}



}





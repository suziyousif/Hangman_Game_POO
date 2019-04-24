#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>
//#include "Hangman.h"

using namespace std;


class Player
{
    private:
        string _name;
        int _score;
        int _wins;
        int _times;
    public:
        Player(string name);
        void newGame();
        void setScore(int score);
        void setWins(int wins);
        void setTimes(int times);
        int getScore();
        int getWins();
        int getTimes();
        char askLetter();
        void printStats();
        virtual ~Player();

    protected:


};

#endif // PLAYER_H

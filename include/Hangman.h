#ifndef HANGMAN_H
#define HANGMAN_H
#include <iostream>
#include <vector>
#include "Player.h"
#include "Dictionary.h"
#include "Word.h"
using namespace std;

class Hangman
{
    private:
        int _wrong_tries;
        void printStatus();
        Player *_player;
        Word *_hang_word;
        Dictionary *_vocabulary;
    public:
        Hangman(Player *player, Dictionary *dict);
        Player * getPlayer();
        int getWrongTries();
        bool run();
        int gameScore();
        virtual ~Hangman();
};

#endif // HANGMAN_H

#include "Hangman.h"

Hangman::Hangman(Player *player, Dictionary *dict)
{
    _player = player;
    _vocabulary = dict;
    _wrong_tries = 0;
}

Player* Hangman::getPlayer()
{
    return _player;
}

void Hangman::printStatus()
{
    cout<< "\n score:"<<_player->getScore()<<"\n wins:"<<_player->getWins()<<"\n times:"<<_player->getTimes();
}

bool Hangman::run()
{
    _hang_word = _vocabulary->selectWord();
    _hang_word->reset();
    cout<<"\nhint: "<<_hang_word->hint();
    _hang_word->print();
    char guessLetter;
    uint8_t i = 0, j=0;
    while (getWrongTries() < 6 && _hang_word->missing()){
        guessLetter = _player->askLetter();
        if (_hang_word->hasLetter(guessLetter) == 1){
            i++;
            _player->setScore(i);
            _hang_word->print();
        }
        else{
            _wrong_tries++;
        }
        j++;
        _player->setTimes(j);
        printStatus();
    }
    if (_hang_word->missing() == 0){
        _player->setWins(1);
        cout << "\n---------------------->>you win!! :)";
        printStatus();
    }else{
        _player->setWins(0);
        cout << "\n---------------------->>you loose!! :(";
        printStatus();
    }

    return 1;
}

int Hangman::getWrongTries()
{
    return _wrong_tries;
}

int Hangman::gameScore()
{
    return _player->getScore();
}

Hangman::~Hangman()
{
    //dtor
}

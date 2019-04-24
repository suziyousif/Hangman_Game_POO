#include "Player.h"

Player::Player(string name)
{
    _name = name;
    _score = 0;
    _wins = 0;
    _times = 0;
}
void Player::newGame()
{

}
char Player::askLetter()
{
    char letter;
    cout << "\nGuess a letter:";
    cin>>letter;
    return letter;
}
void Player::setScore(int score)
{
    _score = score;
}
void Player::setWins(int wins)
{
    _wins = wins;
}
void Player::setTimes(int times)
{
    _times = times;
}
int Player::getScore()
{
    return _score;
}
int Player::getWins()
{
    return _wins;
}
int Player::getTimes()
{
    return _times;
}
void Player::printStats()
{
    cout<<"Jogador: "<< _name<< "\n score:"<<_score<<"\n wins:"<<_wins<<"\n times:"<<_times;
}
Player::~Player()
{
    //dtor
}

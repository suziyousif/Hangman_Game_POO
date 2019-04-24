#include <iostream>
#include <stdlib.h>
#include "Dictionary.h"
#include "Hangman.h"
#include "Player.h"
using namespace std;

int main()
{
    Dictionary dict;
    Player player1("Suzi");
    Hangman Hangman_game(&player1, &dict);
    Hangman_game.run();

    return 0;
}

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Word.h"
#include "Dictionary.h"
#include "Hangman.h"
#include <vector>
#include "Player.h"
using namespace std;

int main()
{
    //class Word test
    /*Word teste("tartaruga", "animal");
    bool x = teste.hasLetter('a');  //search a a letter
    cout<<"word: "<<teste.str()<<" hint:"<<teste.hint()<<" missing? "<<teste.missing()<<endl;
    teste.reset();
    teste.print();
    string _nome;
    //cin>>_nome;
    //cout << "\n"<<_nome;*/
    Dictionary dict;
    Player player1("Suzi");
    //player1.printStats();
    Hangman Hangman_game(&player1, &dict);
    //cout << Hangman_game.getPlayer();
    Hangman_game.run();
    //dict.addWord();
    /*Word* RANDOM_WORD=dict.selectWord();
    cout << RANDOM_WORD->str()<<" hint:"<<RANDOM_WORD->hint()<<" missing? "<<RANDOM_WORD->missing()<<"\n";
    char letter;
    for (int i=0; i<RANDOM_WORD->size();i++){
        cout << "put a letter:\n";
        cin>>letter;
        RANDOM_WORD->hasLetter(letter);
        cout<<RANDOM_WORD->visible()<< " missing? "<<RANDOM_WORD->missing();
    }*/
    return 0;
}

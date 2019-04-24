#include "Dictionary.h"
//#define DEBUG
Dictionary::Dictionary()
{
    vec_words.push_back(new Word("cachorro", "animal"));
    vec_words.push_back(new Word("casa", "objeto"));
    vec_words.push_back(new Word("celular", "objeto"));
    vec_words.push_back(new Word("florianopolis", "cidade"));
    vec_words.push_back(new Word("brasil", "pais"));
    vec_words.push_back(new Word("russia", "pais"));
    vec_words.push_back(new Word("tartaruga","animal"));
}
void Dictionary::addWord(Word *_word)
{
    vec_words.push_back(_word);
}
Word* Dictionary::selectWord()
{
    srand (time(0));
    uint8_t randomIndex = rand() % vec_words.size();
    return vec_words.at(randomIndex);

}
Dictionary::~Dictionary()
{
    //dtor
}

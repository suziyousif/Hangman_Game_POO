#include "Dictionary.h"
//#define DEBUG
Dictionary::Dictionary()
{
    vec_words.push_back(new Word("dog", "animal"));
    vec_words.push_back(new Word("home", "object"));
    vec_words.push_back(new Word("mobile", "object"));
    vec_words.push_back(new Word("Florianopolis", "city"));
    vec_words.push_back(new Word("Brazil", "country"));
    vec_words.push_back(new Word("Russia", "country"));
    vec_words.push_back(new Word("cat","animal"));
    vec_words.push_back(new Word("car","object"));
    vec_words.push_back(new Word("bird","animal"));
    vec_words.push_back(new Word("black","color"));
    vec_words.push_back(new Word("yellow","color"));
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

#ifndef DICTIONARY_H
#define DICTIONARY_H
#include "Word.h"
#include <vector>
#include <stdlib.h>
#include <time.h>
class Dictionary
{
    public:
        Dictionary();
        void addWord(Word *_word);
        Word *selectWord();
        virtual ~Dictionary();

    protected:

    private:
        vector <Word*> vec_words;
        vector <Word*>::iterator it;
};

#endif // DICTIONARY_H

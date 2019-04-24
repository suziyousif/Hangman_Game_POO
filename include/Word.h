#ifndef WORD_H
#define WORD_H
#include <string>
using namespace std;

class Word
{
    private:
        string _word;
        string _hint;
        string _visible;
    public:
        Word(string word, string hint);
        bool hasLetter(char a);
        int missing();
        string str();
        string hint();
        string visible();
        int size();
        void print();
        void reset();
        virtual ~Word();
};

#endif // WORD_H

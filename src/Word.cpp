#include "Word.h"
#include <iostream>
#include <string>

using namespace std;
Word::Word(string word, string hint)
{
    _word = word;
    _hint = hint;
    _visible.assign(_word.length(),'-');  //fill the string with --...
}

bool Word::hasLetter(char a)
{
    size_t found = _word.find(a);
    uint8_t i = 0;
    if (found != std::string::npos)
        i = 1;
    while(found != std::string::npos)
    {

        _visible.replace(found,1,1,a);
        found = _word.find(a, found+1);
    }
    return i;
}
int Word::missing()
{
    size_t found = _visible.find('-');
    unsigned int i = 0;
    while(found != std::string::npos)
    {
        found = _visible.find('-', found+1);
        i++;
    }
    return i;
}
string Word::str()
{
    return _word;
}
string Word::hint()
{
    return _hint;
}
string Word::visible()
{
    return _visible;
}
int Word::size()
{
    return _word.length();
}
void Word::print()
{
    cout << "\nword: "<<_visible;
}
void Word::reset()
{
    _visible.assign(_word.length(),'-');  //fill the string with --...
}
Word::~Word()
{
    //dtor
}

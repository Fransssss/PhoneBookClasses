// Implementation of class Person

#include "Person.h"
#include "sstream"           // to use stringstream
#include <cstring>           // to use C-string
using std::stringstream;

Person::Person(const char* name, const char* number, const int& level)
{
                                                //since name hasn't not beeen allocated memory so we're gonna do it here
    _name = new char[strlen(name) + 1];     // allocate memeory as many as the length of name in parameter plus one for nullptr
    strcpy(_name, name);            // then we can copy the value after memory has been allocate for _name
    strcpy(_number, number);        // no need allocate memory since we already set its size
    _level = level;
}

string Person::GetName() const
{
    return string(_name);                   // return as string
}

string Person::GetNum() const
{
    return string(_number);                  // return as string
}

int Person::GetLev() const
{
    return _level;
}

string Person::ToString() const
{
    stringstream ts;
    ts << "Name:" << string(_name) << ", Number: " << string(_number)
    << ", Level: " << _number;
    return ts.str();                            // return as string with str()
}

string Person::ToJson() const
{
    stringstream tj;
    tj << "\"Name\":\"" << string ( _name) << ", Number: " << string(_number)
    << ", Level: " << _level;
    return tj.str();                           // return as string with str()
}

istream& Person::Read(istream& input)
{
    return input;
}

ostream& Person::Write(ostream output) const
{
    return output;
}

bool Person::Equal(const Person &person) const
{
    int isSame = 0;
    isSame = strcmp(person._name, _name);     // return 0 if the same
    if(isSame == 0)                           // the same name
    {
        return true;
    } else                                   // different name
    {
        return false;
    }
}

Person::~Person()                             // clean the heap/memory
{
    delete[] _name;                          // delete with bracket because we allocated new memory with bracket/ as an array
}

// Declaration of class Person

#ifndef PHONEBOOKCLASSES_PERSON_H
#define PHONEBOOKCLASSES_PERSON_H

#include <iostream>
using std::string;
using std::istream;                             // read from file
using std::ostream;                             // write to file

class Person
{
private:
    char* _name;                                 // it's not known the length of name of dynamically allocate memory
    char _number[11];                            // U.S. number there are 10 and the 11th is for nullptr
    int _level;
public:
    Person(const char* name, const char* number, const int& level);   // contructor of class
    string GetName() const;
    string GetNum() const;
    int GetLev() const;
    string ToString() const;
    string ToJson() const;
    istream& Read(istream& input);
    ostream& Write(ostream output) const;
    bool Equal(const Person& person) const;      // compare later as C-strings
    ~Person();                                   // deallocate memory that's allocated to prevent memory leak/pointer to memory in head is not deleted
};

#endif //PHONEBOOKCLASSES_PERSON_H

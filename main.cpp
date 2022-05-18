// Title : PhoneBook of People
// Purpose: Practice c-string with classes
// Author: Fransiskus Agapa
// Have fun - Enjoy the process - Practices make perfect

#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << endl;

    Person friendO("Jakub", "1234567899", 5);
    cout << friendO.ToJson() << endl;
    cout << friendO.ToString() << endl;
    if(friendO.GetLev() <= 5 && friendO.GetLev() >= 1)              // how close someone is
    {
        cout << "[" << friendO.GetName() << "] is a new friend!" << endl;
    } else if (friendO.GetLev() > 5)
    {
        cout << "[" << friendO.GetName() << "] is someone I already knew for sometime!" << endl;
    } else
    {
        cout << "[" << friendO.GetName() << "] is a stranger!" << endl;
    }


    cout << endl;

    Person friendT("Rebecca", "9876543211", 7);
    cout << friendT.ToJson() << endl;
    cout << friendT.ToString() << endl;
    if(friendT.GetLev() <= 5 && friendT.GetLev() >= 1)             // how close someone is
    {
        cout << "[" << friendT.GetName() << "] is someone I just meet!" << endl;
    } else if (friendT.GetLev() > 5)
    {
        cout << "[" << friendT.GetName() << "] is someone I already knew for sometime!" << endl;
    } else
    {
        cout << "[" << friendT.GetName() << "] is a new friend!" << endl;
    }

    cout << endl;

    Person friendTh("Melinda", "1122334455", 0);
    cout << friendTh.ToJson() << endl;
    cout << friendTh.ToString() << endl;
    if(friendTh.GetLev() <= 5 && friendTh.GetLev() >= 1)             // how close someone is
    {
        cout << "[" << friendTh.GetName() << "] is someone I just met!" << endl;
    } else if (friendTh.GetLev() > 5)
    {
        cout << "[" << friendTh.GetName() << "] is someone I already knew for sometime!" << endl;
    } else
    {
        cout << "[" << friendTh.GetName() << "] is a new friend!" << endl;
    }

    cout << endl;
    return 0;
}

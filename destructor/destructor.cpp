#include "destructor.h"
#include <iostream>
#include "destructor.h"

using namespace std;

destructor :: destructor()
{
    cout << "constructor has been called" << endl;

}

destructor :: ~destructor()
{
    cout << "destructor has been called" << endl; //destructor can't hold parameter thats why it doesn't support function overloading
}

void destructor :: display()
{
    cout << "Display function has been called " << endl;
}

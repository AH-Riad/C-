#include <iostream>
#include "destructor.h"
#include "destructor.h"

using namespace std;


int main()
{
    destructor ob;
    ob.display();
//ANOTHER PROCESS OF CALLING DISPLAY FUNCTION
    destructor *p = & ob;
    p -> display ();

}

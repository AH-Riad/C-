#include<iostream>
using namespace std;
void display ()
{
   cout <<"inside the display function x = " << x <<endl; // we can not use the value of main function
                                                          // in other places

}
    int main()
    {
        int x = 10;
        cout << "Inside the main function x = " << x <<endl;
        display ();
    }


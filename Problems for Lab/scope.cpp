#include<iostream>
using namespace std;
int x= 50;
void display ()
{
   cout <<"inside the display function x = " << ::x <<endl;

}
    int main()
    {
        int x = 10;
        cout << "Inside the main function x = " << x <<endl;
        display ();
    }


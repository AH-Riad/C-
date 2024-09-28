#include<iostream>
using namespace std;

int x = 10;       // global variable

int main()
{
    int x = 50;   // local variable

    cout << :: x << endl; // we need to use scope resulation operator to reach the global variable
                          // otherwise it will print the value of of local variable
}

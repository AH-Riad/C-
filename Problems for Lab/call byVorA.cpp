#include<iostream>
using namespace std;

void swap (int a,int b)
    {
        int temp = a;
        a=b;
        b=temp;
    }
void swap (int *a,int *b)
    {
        int temp = *a;
        *a=*b;
        *b=temp;
    }

int main ()
{
    cout << "For call by value:"<<endl;
    int a=50,b=20;
    swap(a,b);
    cout << "a is = "<<a <<endl<<"b is = " <<b<<endl;

    cout << "For call by adress:"<<endl;
    int c=50, d=20;
    swap(&c,&d);
    cout << "c is = "<<c <<endl<<"d is = " <<d;
}


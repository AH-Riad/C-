#include<iostream>
using namespace std;
class operation
{
public:
    int a,b;
    int summation;

    void get();
    void sum();

};
inline void operation :: get()
{

    cout <<"Enter value of a: ";
    cin>>a;
    cout <<"Enter value of b: ";
    cin>>b;

}
inline void operation::sum()
{
    summation = a+b;
    cout <<"Summation = " << summation;
}

int main()
{
    operation ob;
    ob.get();
    ob.sum();
}

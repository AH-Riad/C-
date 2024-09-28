#include<iostream>
using namespace std;
class student
{
protected:
    int id=101;
    string name="Riad";
};
class cse:public student
{
public:
    void display()
    {
        cout<<"Id:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
    }
};
int main()
{
    cse ob;
    ob.display();
    return 0;
}

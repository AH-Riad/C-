#include<iostream>
using namespace std;
class student
{
public:
    int id=102;
    string name="Riad";
    void display()
    {
        cout<<"Id="<<id<<endl;
        cout<<"Name="<<name<<endl;
    }
};
int main()
{
    student ob;
    ob.display();
    cout<<"Id from main function:"<<ob.id<<endl<<ob.name;
    return 0;
}

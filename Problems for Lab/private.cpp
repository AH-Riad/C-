#include<iostream>
using namespace std;
class student
{
private:
    int id=101;
    string name="riad";
public:
    void display()
    {
       cout<<"Id="<<id<<endl;
       cout<<"Name="<<name<<endl;
    }
};
int main()
{
    student obj;
    obj.display();
 // cout<<"Id from main function:"<<obj.name<<endl;
    return 0;
}

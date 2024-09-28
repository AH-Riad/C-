#include<iostream>
using namespace std;
class person
{
public :
    string name;
    int age;
    void display()
    {
        cout <<"Name = " << name<<endl;
        cout <<"Age = " << age << endl;
    }
};
class student : public person
{
    //age,name,display() chole asbe
public :
    int id ;
    void display2()
    {
       cout << "ID : " <<id <<endl;
       cout << "Name " << name << endl;
       cout << "Age = " << age <<endl;
    }
};
int main()
{
    student s1;
    s1.id = 101;
    s1.name = "Riad";
    s1.age = 22;
    s1.display2();
}

#include<iostream>
using namespace std;
class student
{
public:

    int id ;
    double gpa ;

    void display ()
    {
        cout << "ID = "<<id <<endl <<"GPA = "<<gpa;
    }

    student()                  //default constructor
    {
        cout << "I am a default constructor"<<endl;
    }

    student(int x,double y)    //parameterized constructor

    {
        id = x;
        gpa = y;

    }


};

int main ()
{
    student ob;
    student Riad(22111127,3.78);

    Riad.display();



}

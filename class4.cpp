#include<iostream>
using namespace std;

class student
{   public:
    int id;
    double gpa;

};
int main()
{
    student riad;    //Here student is a class and riad is an  object
    riad.id = 101;
    riad.gpa = 3.78;
    cout <<"ID = " << riad.id <<endl << "GPA = " << riad.gpa;

    // We can creat more object like riad

}

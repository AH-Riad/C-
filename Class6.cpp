#include <iostream>
using namespace std;

class student
{
public :
    int id;
    double gpa;
    void display ()
    {
         cout << id <<endl << gpa<<endl;


    }

    void setValue (int x,double y)
    {
        id = x;
        gpa = y;
    }
};
int main ()
{
    student Riad, Ahona;

    Riad.setValue(22111127,3.78);
    Riad.display();

    Ahona.setValue(22111128,3.92);
    Riad.display ();
}

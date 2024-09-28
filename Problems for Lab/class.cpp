
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

};
int main ()
{
    student Riad, Ahona;
    Riad.id = 22111127;
    Riad.gpa = 3.78;
    Riad.display();
    Ahona.id = 22111128;
    Ahona.gpa = 3.92;
    Riad.display ();
}

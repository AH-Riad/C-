
#include<iostream>
using namespace std;

class student
{
public :
    const int admissionFee;                                    //It won't execute because we need to initialize
                                                               //the value of constant variable at the same time
    const int examFee;
    int id ;         //normal variable
    student (int x,int y,int z): admissionFee(x),examFee(y)    //That's how we initialize them using constructor initializer
    {
        //admissionFee = x;
        //examFee = y;
        cout << "Admission Fee = " << admissionFee <<endl;
        cout << "Exam Fee = " << examFee << endl;
        int id = z;      //Normal variable can be initialize any time
        cout << "ID = " <<id <<endl;
    }
};

int main ()
{
    student ob(15000,500,22111127);
}

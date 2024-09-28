#include<iostream>
using namespace std;

class student
{
public :
    int admissionFee;
    int examFee;
    student (int x,int y)
    {
        admissionFee = x;
        examFee = y;
        cout << "Admission Fee = " << admissionFee <<endl;
        cout << "Exam Fee = " << examFee;
    }
};

int main ()
{
    student ob(1500,500);
}

#include<iostream>
using namespace std;
class student
{
private :
    string name;
public :
    void setName(string x)
    {
        name = x;

    }
    void getName()
    {
    cout <<name;

    }
};
int main ()
{
    student s1;
    s1.setName("Riad");
    s1.getName();
}

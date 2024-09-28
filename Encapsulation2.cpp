#include<iostream>
using namespace std;
class student
{
private :
    int y;
public :
    void setName(int x)
    {
        y = x;

    }
    int getName()
    {
       return y;

    }
};
int main ()
{
    student s1;
    s1.setName(10);
    cout<< s1.getName();
}

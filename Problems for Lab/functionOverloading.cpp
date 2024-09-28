#include<iostream>
using namespace std;
class operation
{
public:
    void area(int r);
    void area(int b,int h);
    void area(float f,int i,int g);
};
void operation::area(int r)
{
    cout <<"Area of circle is = " <<3.1416*r*r<<endl;
}

void operation::area(int b,int h)
{
    cout <<"Area of rectangle is = " << b*h<<endl;
}

void operation :: area(float f,int b,int h)
{
    cout <<"Area of triangle is  : "<< f*b*h<<endl;
}

int main()
{
    operation ob;
    ob.area(5);
    ob.area(3,5);
    ob.area(.5,4,5);
}

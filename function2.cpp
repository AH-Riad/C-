#include<iostream>
using namespace std;

int addition(int a,int b)
{

int sum =  a+b;
return sum;


}
int main()
{
   int a,b;
   cout << "Enter two number :"<<endl;
   cin >> a >> b;
   int result = addition(20,30);
   cout << result;

}

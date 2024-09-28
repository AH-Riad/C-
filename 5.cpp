#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"Enter two numbers: ";

    cin>>num1>>num2;
   // cout<<showpoint;                 // used to show point after decimal value

    cout<<setprecision(2);           // used to show point(as per comand) including decimal point

    cout<<fixed;                     // used to show point without including decimal point(after decimal point)
    float sum=num1+num2;


    double div =(float)num1/num2;    //type casting


    cout <<setw(30) << "Sum of entered number is : " << sum<< endl;

    cout << setw(30) << "division is : " <<div <<endl;

                                     //setw uses to formatting outputs





}

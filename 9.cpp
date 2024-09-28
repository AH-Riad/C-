#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter number of students :";
    cin>>n;
    int marks[n];
    cout << "Enter marks: ";

    for (int i=0;i<n;i++)
    {
        cin>>marks[i];
    }

    cout << "You entered :";
    for ( int i=0;i<n; i++)
    {
        cout << marks [i]<<endl;
    }

int max = marks[0];
int min = marks [0];

for ( int i = 1 ;i<n ; i++)
{
   if(max<marks[i])
   {
       max = marks[i];
   }
   if(min>marks[i])
   {
       min = marks[i];
   }

}
cout<< "Maximum number is = "<<max<<endl;
cout<< "minimum number is = "<<min;


}

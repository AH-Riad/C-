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
}

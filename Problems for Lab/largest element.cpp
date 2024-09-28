#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter number of element "<<endl;
    cin>>n;
    cout <<"Enter marks: "<<endl;
    int arr[n];
    for (int i= 0;i<n; i++)
    {
        cin >>arr[i];
    }
    cout << "You entered :"<<endl;
    for( int i = 1; i<n; i++)
    {
        cout <<arr[i]<<endl;
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i<n; i++)
    {
        if (arr[0]<arr[i])
        {
            max = arr[i];
        }
    }
    cout <<"Largest element is : " << max<<endl;

    for (int i = 1; i<n; i++)
    {
        if (arr[0]>arr[i])
        {
            min = arr[i];
        }
    }
    cout <<"smallest element is : " << min;
}

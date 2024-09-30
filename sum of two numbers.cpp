#include<iostream>
using namespace std;

    int main()
{
    int n;
    cin>>n;
    int arr[n];
        for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cin>>x;


    int low = 0;
    int high =n-1;

    while(low < high )
    {
    if(arr[low] + arr[high] == x){
      cout << arr[low] <<" " <<arr [high];
break;
    }

    else if(arr[low] + arr[high] < x)
    {
        low++;

    }
    else if( arr[low] + arr[high] >x)
    {
        high--;
    }
    else
    {

        cout << "IMPOSIBLE ";
    }



}





}

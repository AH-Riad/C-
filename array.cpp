#include<iostream>
using namespace std;

void arrayelements(int arr[],int n)
{
    for(int i = 0; i<n ; i++)
    {
        cout << arr[i] << " ";

    }
}
int main()
{
    int arr[] = {5,6,7,8,9,10};
    arrayelements (arr,6);

}

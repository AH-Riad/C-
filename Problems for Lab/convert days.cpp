#include<iostream>
using namespace std;
int main ()
{
    cout <<"Enter day :";
    int n;
    cin >> n;
    cout << "You entered :" << n<<endl;

    int years = n / 365;
    int weeks = (n % 365) / 7;
    int days = weeks % 7;

    cout << n << " days is equivalent to: " << years << " years, " << weeks << " weeks, and " << days << " days." << endl;

    return 0;
}


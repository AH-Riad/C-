#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    ch = tolower(ch);                             //used for taking capital character instead
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout << "Vowel";

    }
    else

    {
        cout << "Consonant";
    }



}

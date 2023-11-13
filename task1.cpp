#include<iostream>
using namespace std;

bool isLengthEven(string letter)
{
    int i = 0;
    while(letter[i] != '\0')
    {
        i++;
    }
    return (i%2==0);
}

main()
{
    string letter;
    cout << "Enter a String: ";
    cin  >> letter;
    cout << isLengthEven(letter);
}


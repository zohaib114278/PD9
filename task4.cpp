#include<iostream>
using namespace std;

void evenOddTransform(int elements[], int a, int b)
{
    cout << "[";
    for(int i=0;i<a;i++)
    {
        if(elements[i] %2 == 0)
        {
            if( i==0)
                cout << elements[i]- 2*b;
            else
                cout << ", " << elements[i]- 2*b;
        }
        elseif(elements[i] %2 ! = 0)
        {
            if( i==0)
                cout << elements[i]+ 2*b;
            else
                cout << ", " << elements[i] + 2*b;
        }
    }
    cout << "]";
}

main()
{
    int a,b;
    cout << "Enter the size of Array: ";
    cin  >> a;
    int elements[a];
    for(int idx= 1;idx<=a;idx++)
    {
        cout << "Enter Element " << idx << ": ";
        cin  >> elements[idx-1];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin  >> b;
    evenOddTransform(elements,a,b);
}


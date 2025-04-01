#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int d;
    int max = 0;

    while (n>0)
    {
        d = n%10;
        if (d>=max)
        max = d;
        n/=10;
    }

    cout<<"Maximim Digit "<<max ;
    return 0;
}
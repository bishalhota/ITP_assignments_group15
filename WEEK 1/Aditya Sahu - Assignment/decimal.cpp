#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Decimal Number";
    cin>> n;

    int temp = n;

    cout<<"Binary : ";

    while(temp>0)
    {
        cout<<n%2;
        n/=2;
    }
}
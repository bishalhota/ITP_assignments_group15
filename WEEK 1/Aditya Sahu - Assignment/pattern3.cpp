#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int i,j;
    for (i = 1; i<=4; i++)
    {
        
            for(int k=1;k<=i;k++)
            {
                cout<< k;                
            }
            for (int k = n - i;k>0;k--)
            cout<<"  ";
            for(int k=i;k>=1;k--)
            {
                cout<< k;
            }
            cout<<endl;
        
        
    }
    
    return 0;
}

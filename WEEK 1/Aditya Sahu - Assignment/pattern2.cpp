#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i=1;

    for (int k = 1; k<=3;k++){
    for (int j = 1;j<=n;j++){
    cout<<i;
    if(j!=n) cout<<"*";
    i++;
    }
    cout<<endl;
}
    return 0;
}

#include<iostream>
using namespace std;
int main() {
    int n1, n2;
    cin >> n1;
    int a[n1];
    for(int i = 0; i < n1; i++) cin >> a[i];
    cin >> n2;
    int b[n2];
    for(int i = 0; i < n2; i++) cin >> b[i];
    int m = n1 + n2;
    int c[m];
    for(int i = 0; i < n1; i++) c[i] = a[i];
    for(int i = 0; i < n2; i++) c[n1 + i] = b[i];
    for(int i = m - 1; i >= 0; i--) cout << c[i] << " ";
    return 0;
}

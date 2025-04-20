#include<iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> k;
    k = k % n;
    for(int i = 0; i < n; i++) b[(i + k) % n] = a[i];
    for(int i = 0; i < n; i++) cout << b[i] << " ";
    return 0;
}

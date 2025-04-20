#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], temp[n], k = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) if(a[i] < 0) temp[k++] = a[i];
    for(int i = 0; i < n; i++) if(a[i] >= 0) temp[k++] = a[i];
    for(int i = 0; i < n; i++) cout << temp[i] << " ";
    return 0;
}

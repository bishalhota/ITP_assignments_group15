#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], first, second;
    for(int i = 0; i < n; i++) cin >> a[i];
    first = second = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(a[i] < first) {
            second = first;
            first = a[i];
        } else if(a[i] < second) {
            second = a[i];
        }
    }
    cout << second;
    return 0;
}

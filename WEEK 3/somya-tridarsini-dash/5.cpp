#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], b[n], k = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        bool found = false;
        for(int j = 0; j < k; j++) {
            if(b[j] == a[i]) {
                found = true;
                break;
            }
        }
        if(!found) b[k++] = a[i];
    }
    for(int i = 0; i < k; i++) cout << b[i] << " ";
    return 0;
}

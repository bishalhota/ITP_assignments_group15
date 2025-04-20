#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], maxCount = 0, res;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++)
            if(a[i] == a[j]) count++;
        if(count > maxCount) {
            maxCount = count;
            res = a[i];
        }
    }
    cout << res;
    return 0;
}

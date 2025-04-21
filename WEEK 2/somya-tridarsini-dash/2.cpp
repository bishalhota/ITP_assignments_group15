#include<iostream>
using namespace std;
void sortArray(int a[], int n) {
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sortArray(a, n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}

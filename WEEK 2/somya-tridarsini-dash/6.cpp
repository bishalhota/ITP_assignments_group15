#include<iostream>
using namespace std;
int main() {
    int a[3][3], b[3][3], sum[3][3], t1[3][3], t2[3][3], tsum[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) cin >> a[i][j];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) cin >> b[i][j];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) {
            t1[j][i] = a[i][j];
            t2[j][i] = b[i][j];
        }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            tsum[i][j] = t1[i][j] + t2[i][j];
            cout << tsum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

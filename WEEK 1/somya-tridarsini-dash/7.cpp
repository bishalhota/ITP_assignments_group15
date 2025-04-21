#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            cout << num;
            if (j != n)
                cout << "*";
            num++;
        }
        cout << endl;
    }

    return 0;
}

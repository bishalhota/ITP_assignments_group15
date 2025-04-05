#include <iostream>
using namespace std;

int main() {
    int n, val = 1;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << val;
            if (j != n - 1)
                cout << "*";
            val++;
        }
        cout << endl;
    }

    return 0;
}

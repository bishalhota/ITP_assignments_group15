#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;


    for (int i = 1; i <= n; i++) {
        cout << i;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        cout << i << i;
    }
    cout << endl;

  
    if (n >= 3) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++)
                cout << i;
        }
        cout << endl;
    }

    return 0;
}

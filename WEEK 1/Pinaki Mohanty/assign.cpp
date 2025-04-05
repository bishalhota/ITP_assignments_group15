#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool n = false;
    for (int i = 1; i * i <= num; ++i) {
        if (i * i == num) {
            i = true;
            break;
        }
    }

    if (n)
        cout << num << " is a perfect square.\n";
    else
        cout << num << " is not a perfect square.\n";

    return 0;
}

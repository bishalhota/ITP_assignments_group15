#include <iostream>
using namespace std;

int main() {
    int decimal, i;
    int binary[32], octal[32];

    cout << "Enter a decimal number: ";
    cin >> decimal;

    int num = decimal;
    i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--)
        cout << binary[j];
    if (decimal == 0) cout << 0;
    cout << endl;

    num = decimal;
    i = 0;
    while (num > 0) {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }
    cout << "Octal: ";
    for (int j = i - 1; j >= 0; j--)
        cout << octal[j];
    if (decimal == 0) cout << 0;
    cout << endl;

    return 0;
}

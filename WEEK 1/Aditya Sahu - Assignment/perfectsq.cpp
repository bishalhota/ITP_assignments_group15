#include <iostream>

using namespace std;

bool isPerfectSquare(int num) {
    if (num < 0) {
        return 0; 
    }
    
    int i = 0;
    while (i * i <= num) {
        if (i * i == num) {
            return true;
        }
        i++;
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPerfectSquare(num)) {
        cout << num << " is a perfect square.";
    } else {
        cout << num << " is not a perfect square.";
    }
    
    return 0;
}

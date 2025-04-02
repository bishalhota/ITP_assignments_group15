#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            std::cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    return 0;
}

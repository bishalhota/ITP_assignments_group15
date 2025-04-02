#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    // First pattern: single row of numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        std::cout << i;
    }
    std::cout << std::endl;
    
    // Second pattern: numbers repeated twice in increasing order
    for (int i = 1; i <= n; i++) {
        std::cout << i << i;
    }
    std::cout << std::endl;
    
    // Third pattern: each number repeated n times
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << i;
        }
    }
    std::cout << std::endl;
    
    return 0;
}

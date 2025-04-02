#include <iostream>

void decimalToBinary(int num) {
    int binary[32];
    int index = 0;
    
    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }
    
    std::cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--) {
        std::cout << binary[i];
    }
    std::cout << std::endl;
}

void decimalToOctal(int num) {
    int octal[32];
    int index = 0;
    
    while (num > 0) {
        octal[index] = num % 8;
        num /= 8;
        index++;
    }
    
    std::cout << "Octal: ";
    for (int i = index - 1; i >= 0; i--) {
        std::cout << octal[i];
    }
    std::cout << std::endl;
}

int main() {
    int decimal;
    
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    
    decimalToBinary(decimal);
    decimalToOctal(decimal);
    
    return 0;
}
#include <iostream>
#include <vector>

void binary(int number) {
    std::vector<int> chain;
    while (number > 0) {
        chain.push_back(number % 2);
        number /= 2;
    }
    std::cout << "Binary representation: ";
    for (auto itr = chain.rbegin(); itr != chain.rend(); ++itr) {
        std::cout << *itr;
    }
    std::cout << std::endl;
}


void octal(int number) {
    std::vector<int> pain;
    while (number > 0) {
        pain.push_back(number % 8);
        number /= 8;
    }
    std::cout << "Octal representation: ";
    for (auto itr = pain.rbegin(); itr != pain.rend(); ++itr) {
        std::cout << *itr;
    }
    std::cout << std::endl;
}

int main() {
    int x;
    std::cout << "Enter a positive integer: ";
    std::cin >> x;

    if (x < 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        binary(x);
        octal(x);
    }

    return 0;
}

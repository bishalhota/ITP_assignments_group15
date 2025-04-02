#include <iostream>

int main(){
    int num, digit, largest=0; 
    std::cout << "Enter a number: ";
    std::cin >> num;

    while (num > 0)
    {
        digit = num % 10;
        if(digit > largest){
            largest = digit;
        }
        num /= 10;
    }
    std::cout << "The largest digit is " << largest;
    return 0;
}
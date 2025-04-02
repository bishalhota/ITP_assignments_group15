#include <iostream>

int main(){
    int num, quotient, flag=0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for (int i = 1; i < num; i++)
    {
        quotient = num/i;
        if(quotient == i){
            flag = 1;
            std::cout << num << " is a perfect square";
            break;
        }
        if(i > quotient){
            break;
        }
    }
    
    if(flag == 0){
        std::cout << num << " is not a perfect square";
    }
    return 0;
}
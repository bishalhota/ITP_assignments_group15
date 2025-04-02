#include <iostream>

int main()
{
    double a, b, c;

    std::cout << "Enter three sides of the triangle: ";
    std::cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        std::cout << "A triangle can be formed" << '\n';

        if (a == b && b == c)
        {
            std::cout << "It is an Equilateral triangle." << '\n';
        }
        else if (a == b || b == c || a == c)
        {
            std::cout << "It is an Isosceles triangle." << '\n';
        }
        else
        {
            std::cout << "It is a Scalene triangle." << '\n';
        }
    }
    else
    {
        std::cout << "A triangle cannot be formed with these sides." << '\n';
    }

    return 0;
}

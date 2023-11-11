#include <iostream>

int main()
{
    float x;
    do
    {
        std::cout << "podaj liczbe:";
        std::cin >> x;
        std::cout << 2 * x << std::endl;

    } while (x < 1 || x > 10);
}
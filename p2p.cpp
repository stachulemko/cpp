#include <iostream>

int main()
{
    int a;
    int h;
    float p;
    std::cout << "podaj pierwsza liczbe:";
    std::cin >> a;
    std::cout << "podaj druga liczbe:";
    std::cin >> h;
    p = 0.5 * a * h;
    std::cout << p << std::endl;
}

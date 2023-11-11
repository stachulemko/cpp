#include <iostream>
#include <cmath>
int main()
{
    int x, g;
    std::cout << "Podaj liczbe koncowa: ";
    std::cin >> x;

    int monety[x]; // To nie jest standardowy sposób definiowania tablicy w C++. Zaleca się używanie dynamicznej alokacji pamięci lub std::vector

    int licznik = 0;

    for (int i = 2; i < x; i++)
    {
        monety[i] = 0;
    }

    g = sqrt(x);

    for (int i = 0; i < g; i++)
    {

        if (monety[i] == 0) //&& i * i < x)
        {
            for (int j = i * i; j < x; j += i)
            {
                monety[j] = 1;
            }
        }
    }

    for (int i = 0; i < x; i++)
    {
        if (monety[i] == 0)
        {
            licznik += 1;
            std::cout << i << std::endl;
        }
    }

    std::cout << "Liczba liczb pierwszych: " << licznik << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    for (int i = 100; i >= 10; i--)
    {
        //std::cout<<i<<std::endl;
        if (i % 7 > 0)
        {
            std::cout << i << std::endl;
        }
    }
}
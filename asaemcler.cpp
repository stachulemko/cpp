#include <stdio.h>

int countFractal(int base, int fractal)
{
    if (fractal == 0)
    {
        return 1;
    }
    else
    {
        return countFractal(base, fractal - 1) * base;
    }
    //return base^fractal;
}
int main(int argc, char **argv)
{
    printf("wynik=%d", countFractal(2, 5));
}

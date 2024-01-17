#include <iostream>
using namespace std;

int main()
{
    int x, spacje, min;
    cin >> x;
    spacje = 2 * (x - 1) + 1;
    for (int h = 1; h <= spacje; h++)
    {
        for (int i = -1; i <= h; i = i + 2)
        {
            min = (spacje - i) / 2;

            for (int j = 1; j <= min; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= i; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}
#include <iostream>
using namespace std;

int main()
{
    int g, l, max;
    cin >> g;
    //cout << l;
    max = 2 * (g - 1) + 1;
    for (int k = 0; k < g; k = k + 1)
    {
        l = 2 * k + 1;
        //cout << l << endl;
        for (int w = 1; w <= l; w = w + 2)
        {
            int spacje = (max - w) / 2;
            //cout << w << " " << spacje << endl;
            for (int i = 1; i <= spacje; i++)
            {
                cout << " ";
            }
            for (int j = 1; j <= w; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}
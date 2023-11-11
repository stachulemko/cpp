#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int lr = 0;
    int reszta;
    cout << "Podaj liczbe monet:";
    cin >> x;
    cout << "Podaj liczbe osob:";
    cin >> y;
    int monety[x];
    for (int i = 0; i < x; i++)
    {
        monety[i] = 0;
    }
    for (int j = 1; j <= y; j++) //osoby
    {
        for (int k = 0; k < x; k++) //monety
        {
            //cout << k << ":" << j << endl;
            reszta = (k + 1) % j;
            //cout << reszta << endl;
            if (reszta == 0)
            {
                //cout << "obrot" << endl;
                if (monety[k] == 1)
                {
                    monety[k] = 0;
                }
                else if (monety[k] == 0)
                {
                    monety[k] = 1;
                }
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        lr = lr + monety[i];
    }
    cout << "dla " << x << " osob i " << y << " monet wynik:" << lr << endl;
}
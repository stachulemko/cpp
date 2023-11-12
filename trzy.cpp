#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    if (a > b && a > c)
    {
        if (b > c)
        {
            cout << c << " " << b << " " << a;
        }
        else
        {
            cout << b << " " << c << " " << a;
        }
    }
    else
    {
        if (b > c)
        {
            cout << a << " " << c << " " << b;
        }
        else
        {
            cout << a << " " << b << "" << c;
        }
    }
}
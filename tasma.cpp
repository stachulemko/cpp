#include <iostream>
using namespace std;

int main()
{
    int x, y, min;
    cin >> x;
    int i = 1;
    cin >> y;
    min = y;
    while (i <= (x - 1))
    {
        i = i + 1;
        cin >> y;
        if (min > y)
        {
            min = y;
        }
    }
    cout << min;
}
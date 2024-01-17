#include <iostream>
using namespace std;

int main()
{
    int a, b, p1;
    //cin >> a >> b;
    //cin >>b;
    int mash[13] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int steps = 6;
    int pos = 6;
    int back = 0;
    int xmin;
    int xmax;
    do
    {
        //cout <<

        xmin = pos - (steps - 2 * back);
        xmax = pos + back;
        cout << xmin << ":" << xmax << endl;
        back = back + 1;
    } while (steps - 2 * back > 0);
}
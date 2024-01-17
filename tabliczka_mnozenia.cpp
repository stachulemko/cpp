#include <iostream>
using namespace std;

int main()
{

    int l;
    cout << 0;
    cout << "     ";
    for (int i = 1; i <= 9; i++)
    {
        cout << i;
        cout << "     ";
    }
    cout << endl;
    cout << endl;
    for (int j = 1; j <= 9; j++)
    {
        cout << j << endl;
        //cout << endl;
        cout << "     ";
        for (int w = 1; w <= 9; w++)
        {

            cout << j * w;
            cout << "     ";
        }
        cout << endl;
    }
}
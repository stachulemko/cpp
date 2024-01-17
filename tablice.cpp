#include <iostream>
using namespace std;

int main()
{
    int n, a, l_tmp = 1, l_max = 0, p_max, p_tmp = 0;
    cin >> n;
    int *tab = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        tab[i] = a;
    }
    //int p1 = tab[0];
    for (int j = 1; j < n; j++)
    {

        //cout << "p1:" << p1;
        //cout << "p:" << tab[j];
        if (tab[j - 1] < tab[j])
        {
            //p1 = tab[j];
            l_tmp++;
        }
        else
        {
            //cout << "bug";
            if (l_tmp > l_max)
            {
                l_max = l_tmp;
                p_max = p_tmp;
                p_tmp = j;
                l_tmp = 1;
            }
        }
    }
    if (l_tmp > l_max)
    {
        l_max = l_tmp;
        p_max = p_tmp;
    }

    cout << "lmax: " << l_max << endl;
    cout << "pmax: " << p_max;
}
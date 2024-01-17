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
    for (int j = 1; j < n; j++)
    {
        //cout << "p1:" << p1;
        //cout << "p:" << tab[j];
        if (tab[j - 1] < tab[j])
        {
            l_tmp++;
        }
        else
        {
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
    cout << "pmax: " << p_max << endl;
    for (int k = p_max; k <= p_max + l_max - 1; k++)
    {
        cout << tab[k] << endl;
    }
}
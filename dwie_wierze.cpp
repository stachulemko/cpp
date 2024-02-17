#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int n, k, a, b, l1 = 0, l2 = 0, index1, index2, licznik_wartosci_1 = 0, licznik_wartosci_2 = 0;

    cin >> n >> k;
    vector<long long int> wieza1(n);
    vector<long long int> wieza2(k);

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        wieza1.push_back(a);
        licznik_wartosci_1 = licznik_wartosci_1 + a;
    }

    for (int j = 1; j <= k; j++)
    {
        cin >> b;
        wieza2.push_back(b);
        licznik_wartosci_2 = licznik_wartosci_2 + b;
    }

    index1 = wieza1.size() - 1;
    index2 = wieza2.size() - 1;

    //cout << index1 << endl;
    //cout << index2 << endl;

    while (index1 >= 0 or index2 >= 0)
    {
        if (licznik_wartosci_1 > licznik_wartosci_2)
        {
            l1 = l1 + 1;

            licznik_wartosci_1 = licznik_wartosci_1 - wieza1[index1];
            //cout << "licznik 1 wieży: " << l1 << endl;
            index1--;
        }
        else if (licznik_wartosci_1 < licznik_wartosci_2)
        {
            l2 = l2 + 1;
            licznik_wartosci_2 = licznik_wartosci_2 - wieza2[index2];
            //cout << "licznik 2 wieży: " << l2 << endl;
            index2--;
        }
        else if (licznik_wartosci_1 == licznik_wartosci_2)
        {
            cout << l1 + l2;
            return 0;
        }
    }

    return 0;
}
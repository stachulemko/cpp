#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int suma = 0;
    vector<int> l;

    for (int i = 1; i <= 3; ++i)
    {
        l.push_back(i);
        suma += i;

        if (suma == 3)
        {
            for (int w = 0; w < l.size(); ++w)
            {
                cout << l[w];
            }
            cout << endl;
        }

        for (int j = 1; j <= i; ++j)
        {
            l.push_back(j);
            suma += j;

            if (suma == 3)
            {
                for (int w = 0; w < l.size(); ++w)
                {
                    cout << l[w];
                }
                cout << endl;
            }

            for (int k = 1; k <= j; ++k)
            {
                l.push_back(k);
                suma += k;

                if (suma == 3)
                {
                    for (int w = 0; w < l.size(); ++w)
                    {
                        cout << l[w];
                    }
                    cout << endl;
                }

                l.pop_back(); // usuń ostatni element
                suma -= k;    // odjęcie ostatniego elementu od sumy
            }

            l.pop_back(); // usuń drugi element
            suma -= j;    // odjęcie drugiego elementu od sumy
        }

        l.pop_back(); // usuń pierwszy element
        suma -= i;    // odjęcie pierwszego elementu od sumy
    }

    return 0;
}

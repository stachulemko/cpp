#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> l;
    vector<int> l1;
    int n, a, l_min = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        l.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        if (l[i] == 1)
        {
            l_min++;
            l1.push_back(l_min);
        }
        else
        {
            l_min--;
            l1.push_back(l_min);
        }
    }

    int min_min = l1[0];
    for (int i = 1; i < n; i++)
    {
        if (min_min > l1[i])
        {
            min_min = l1[i];
        }
    }

    cout << min_min * -1 << endl;

    return 0;
}

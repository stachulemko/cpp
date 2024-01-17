#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int x, y, s;
    vector<int> vector1;
    vector<int> vector2;
    cin >> x;
    int i = 1;
    int l = 0;
    s = 0;
    vector1.push_back(0);
    while (i <= x)
    {
        i = i + 1;
        cin >> y;
        l = l + y;
        vector1.push_back(l);
        vector2.push_back(y);
        //cout << l << " ";
    }
    //cout << vector1.size();

    for (int k = 0; k < x; k++)
    {
        if (vector2[k] == 0)
        {
            s = s + (vector1[x] - vector1[k]);
        }
    }
    cout << s;
}
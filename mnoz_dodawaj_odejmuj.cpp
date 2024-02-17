#include <vector>
#include <stack>
#include <iostream>
#include <string>
using namespace std;
int calc(string line)
{
    stack<int> stos;
    for (int i = 0; i < line.size() - 1; i++)
    {
        string liczba;

        if (line[i] == ' ')
        {
            stos.push(stoi(liczba));
            liczba.clear();
        }
        else if (line[i] == 'M')
        {
            int l1 = stos.top();
            stos.pop();
            int l2 = stos.top();
            stos.pop();
            int iloczyn = l1 * l2;
            stos.push(iloczyn);
        }
    }
    return stos.top();
}
int main()
{
    int n;
    string line;
    //string b;
    cin >> n;
    //cout << "n=" << n << endl;
    for (int i = 1; i <= n; i++)
    {
        getline(cin, line);
        //cout << line << endl;
        calc(line);
    }
    //cout << "end" << endl;
}

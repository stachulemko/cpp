#include <iostream>
#include <stack>
#include <limits>
using namespace std;
int main()
{
    int n = 2, licznik = 0;

    string line;
    string arg;
    int flaga = 0;
    cin >> n;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //getline(cin, n);
    //cout << n << endl;
    for (int i = 1; i <= n; i++)
    {
        stack<int> stos;
        //cin >> line;
        getline(cin, line);
        //cout << "lsize: " << line.size() << endl;
        //cout << "line: " << line << endl;
        for (int j = 0; j < line.size(); j++)
        {
            //cout << "znak: " << line[j] << endl;
            if (line[j] == ' ')
            {
                if (flaga == 0)
                {
                    stos.push(stoi(arg));
                    //cout << "arg: " << arg << endl;
                    arg = "";
                }
            }
            else if (line[j] == 'M' or line[j] == 'D' or line[j] == 'O')
            {
                flaga = 1;
                if (line[j] == 'M')
                {
                    long long int arg1 = stos.top();
                    stos.pop();
                    long long int arg2 = stos.top();
                    stos.pop();
                    stos.push(arg1 * arg2);
                }

                else if (line[j] == 'D')
                {
                    long long int arg1 = stos.top();
                    stos.pop();
                    long long int arg2 = stos.top();
                    stos.pop();
                    stos.push(arg1 + arg2);
                }
                else if (line[j == 'O'])
                {
                    long long int arg1 = stos.top();
                    stos.pop();
                    long long int arg2 = stos.top();
                    stos.pop();
                    stos.push(arg2 - arg1);
                }
            }
            else
            {
                arg.append(line.substr(j, 1));
                flaga = 0;
            }
        }
        long long int wynik = stos.top();
        stos.pop();
        //cout << "wynik" << wynik << endl;
        cout << wynik << endl;
    }
    return 0;
}
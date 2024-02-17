#include <vector>
#include <stack>
#include <iostream>
#include <string>


#if _DEBUG
#define log(msg) { cout << msg << endl;}
#else
  #define log(string, ...) 
#endif
using namespace std;
int calc(string line)
{
    stack<int> stos;
    log("line="<<line);
    log("size="<<5);
    string liczba;
    //return 0;
    for (int i = 0; i < line.size(); i++)
    {
        
        cout << "znak=" << line[i] << endl;
        if (line[i] == ' ')
        {
            if (liczba.size() > 0) {
                cout << "stos" << liczba << endl;
                stos.push(stoi(liczba));
                liczba.clear();
            }

            
        }
        else if (line[i] == 'M' or line[i]=='D' or line[i]=='O')
        {
            //cout << "mnozenie";
            int l1 = stos.top();
            stos.pop();
            int l2 = stos.top();
            stos.pop();
            int wynik;
            if (line[i] == 'M') {

                wynik = l1 * l2;
            }
            else if (line[i] == 'D') {
                wynik = l1 + l2;
            }
            else {
                wynik = l2 - l1;
            }
            stos.push(wynik);

            
            
        }
        else {
            liczba = liczba+line[i];
            cout << "liczba=" << liczba << endl;
        }
    }
    return stos.top();
    //return 0;
}
int main()
{
    int n;
    string line;
    //string b;
    cin >> n;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "n=" << n << endl;
    for (int i = 1; i <= n; i++)
    {
        getline(cin, line);
        //
        // cout << line << endl;
        cout<<"wynik = " << calc(line) << endl;
    }
    cout << "end" << endl;
}

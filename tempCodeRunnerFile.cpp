#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> l;
    int n, a, l_min=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        l.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        if (l[i]==0){
            l_min--;
        }
        else{
            l_min++;
        }
    }
    if (l_min>=0){
        cout<<0;    
    }
    if(l_min<0){
        cout<<l_min*-1;
    }
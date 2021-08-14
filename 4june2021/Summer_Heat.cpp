#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xa1, xa2, xb1, xb2;
        cin >> xa1 >> xa2 >> xb1 >> xb2;
        int o = ceil(xb1 / xa1) + ceil(xb2 / xa2);
        cout << o << endl;
    }
}
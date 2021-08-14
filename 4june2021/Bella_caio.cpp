#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int D, d, P, Q;
        cin >> D >> d >> P >> Q;
        long int m = D * P;
        long int di = D - d;
        while (di >= d)
        {
            m += Q * di;
            di = di - d;
        }
        long int r = D % d;
        m += Q * r;
        cout << m << endl;
    }
}
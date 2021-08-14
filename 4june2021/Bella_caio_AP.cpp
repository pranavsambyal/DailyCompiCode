#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int D, d, P, Q;
        cin >> D >> d >> P >> Q;
        long int pc = D * P;
        long int ext;
        long int n = D / d;
        long int ed = D%d;
        long long int money;
        ext = ((n * (n - 1)) * Q * d) / 2;
        long long int r = ((n) *Q ) * ed;
        money = pc+ext+r;
        cout << money << endl;
    }
}
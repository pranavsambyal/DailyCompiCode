#include <bits/stdc++.h>
int mod = 1e9 + 7;
using namespace std;
long long int po(long long int a, long long int b)
{
    long long int ans = 1;
    a = a % mod;
    if (a == 0)
    {
        return 0;
    }
    else if (b == 0)
    {
        return ans;
    }
    else
    {
        while (b > 0)
        {
            if (b & 1)
                ans = (ans * a) % mod;
            b = b >> 1;
            a = (a * a) % mod;
        }
        return ans;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        long long int ans;
        int a1 = po(2, n) - 1;
        ans = (po(a1, m));
        cout << ans << endl;
    }
}
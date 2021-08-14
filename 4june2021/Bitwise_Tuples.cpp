#include <bits/stdc++.h>
int mod = 1e9 + 7;
using namespace std;
int po(int a, int b)
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
    else if (b % 2 == 0)
    {
        ans = a;
        while (b > 1)
        {
            ans = (ans * ans) % mod;
            b = b / 2;
        }
        return ans;
    }
    else
    {
        ans = a;
        int alt = 1;
        while (b > 1)
        {
            if (b % 2 == 0)
            {
                ans = (ans * ans) % mod;
                a = ans;
                b = b / 2;
            }
            else
            {
                b = b - 1;
                alt = (alt * ans);
            }
        }
        ans = (ans * a) % mod;
        return ans;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        int ans;
        int a1 = po(2, n) - 1;
        ans = (po(a1, m));
        cout << ans << endl;
    }
}
#include <bits/stdc++.h>
const int m = 1e7;
using namespace std;
bool prime[m];
int pr[m];

void primes()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= m; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= m; i += p)
                prime[i] = false;
        }
    }
}
void prime_total()
{
    int c = 0;
    for (int i = 1; i <= m; i++)
    {
        if (prime[i])
        {
            c++;
        }
        pr[i] = c;
    }
}

int main()
{
    primes();
    prime_total();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2)
        {
            cout << '1' << endl;
        }
        else if (n == 3)
        {
            cout << '2' << endl;
        }
        else
        {
            int h = (n / 2);
            int r = pr[n] - pr[h];
            cout << r + 1 << endl;
        }
    }
}
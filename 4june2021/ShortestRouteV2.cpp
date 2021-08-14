//Gave TLE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int city[n];
        int traveler[m];
        for (int i = 0; i < n; i++)
        {
            cin >> city[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> traveler[i];
        }
        map<int, int> tos;
        int l = -1, r = -1;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                tos[i] = 0;
            }
            else if (city[i] != 0)
            {
                tos[i] = 0;
            }
            else
            {
                tos[i] = 999999;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (city[i] == 1)
            {
                r = i;
            }
            if (r != -1)
            {
                if (city[i] == 0)
                {
                    tos[i] = min(tos[i], i - r);
                }
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (city[i] == 2)
            {
                l = i;
            }
            if (l != -1)
            {
                if (city[i] == 0)
                {
                    tos[i] = min(tos[i], abs(i - l));
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            int st = traveler[i] - 1;
            if (tos[st] != 999999)
            {
                cout << tos[st] << " ";
            }
            else
            {
                cout << -1 << " ";
            }
        }
        cout << endl;
    }
}
/// Gave TLE//
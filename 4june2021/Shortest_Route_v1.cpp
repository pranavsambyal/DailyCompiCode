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
        for (int i = 0; i < m; i++)
        {
            int tos = 0;
            if (city[traveler[i] - 1] != 0)
            {
                tos = 1;
            }
            if (tos == 1)
            {
                cout << 0 << " ";
            }
            else
            {
                int time = 0;
                int dest = traveler[i] - 1;
                int l = -1, r = -1;
                int j = dest;
                while (j >= 0 && r == -1)
                {
                    j--;
                    if (city[j] == 1)
                    {
                        r = j;
                    }
                }
                j = dest;
                while (j < n && l == -1)
                {
                    j++;
                    if (city[j] == 2)
                    {
                        l = j;
                    }
                }
                int lt, rt;
                if (l != -1 && r != -1)
                {
                    lt = abs(dest - l);
                    rt = abs(dest - r);
                }
                else if (l == -1 && r != -1)
                {
                    lt = -1;
                    rt = abs(dest - r);
                }
                else if (l != -1 && r == -1)
                {
                    lt = abs(dest - l);
                    rt = -1;
                }
                else
                {
                    rt = lt = -1;
                }

                if (rt != -1 && lt != -1)
                {
                    time = min(lt, rt);
                }
                else
                {
                    time = max(lt, rt);
                }
                cout << time << " ";
            }
        }
        cout << endl;
    }
}
/// Gave TLE//
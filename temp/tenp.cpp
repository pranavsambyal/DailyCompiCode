#include <bits/stdc++.h>
#include <chrono>
using namespace std;
  
  
// A sample function whose time taken to
// be measured
void fun()
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
  
int main()
{
    auto start = chrono::high_resolution_clock::now();
  
    // unsync the I/O of C and C++.
    ios_base::sync_with_stdio(false);
  
    fun();
  
    auto end = chrono::high_resolution_clock::now();
  
    // Calculating total time taken by the program.
    double time_taken = 
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();
  
    time_taken *= 1e-9;
  
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}
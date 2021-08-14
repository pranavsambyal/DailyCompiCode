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
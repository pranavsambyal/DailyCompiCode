#include <iostream>
using namespace std;

int main()
{
    int a[100], t = 1, j = 0;
    while (t > 0)
    {
        cin >> a[j];
        if (a[j] == 42)
        {
            t = 0;
        }
        else
        {
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
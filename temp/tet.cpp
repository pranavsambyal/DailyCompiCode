#include <cstdio>
#include <iostream>
#include<bits/stdc++.h>
using std::string;

static struct IO
{
    char tmp[1 << 10];

    // fast input routines
    char cur;

    //#define nextChar() (cur = getc_unlocked(stdin))
    //#define peekChar() (cur)
    inline char nextChar() { return cur = getc_unlocked(stdin); }
    inline char peekChar() { return cur; }

    inline operator bool() { return peekChar(); }
    inline static bool isBlank(char c) { return (c < '-' && c); }
    inline bool skipBlanks()
    {
        while (isBlank(nextChar()))
            ;
        return peekChar() != 0;
    }

    inline IO &operator>>(char &c)
    {
        c = nextChar();
        return *this;
    }

    inline IO &operator>>(char *buf)
    {
        if (skipBlanks())
        {
            if (peekChar())
            {
                *(buf++) = peekChar();
                while (!isBlank(nextChar()))
                    *(buf++) = peekChar();
            }
            *(buf++) = 0;
        }
        return *this;
    }

    inline IO &operator>>(string &s)
    {
        if (skipBlanks())
        {
            s.clear();
            s += peekChar();
            while (!isBlank(nextChar()))
                s += peekChar();
        }
        return *this;
    }

    inline IO &operator>>(double &d)
    {
        if ((*this) >> tmp)
            sscanf(tmp, "%lf", &d);
        return *this;
    }

#define defineInFor(intType)                         \
    inline IO &operator>>(intType &n)                \
    {                                                \
        if (skipBlanks())                            \
        {                                            \
            int sign = +1;                           \
            if (peekChar() == '-')                   \
            {                                        \
                sign = -1;                           \
                n = nextChar() - '0';                \
            }                                        \
            else                                     \
                n = peekChar() - '0';                \
            while (!isBlank(nextChar()))             \
            {                                        \
                n += n + (n << 3) + peekChar() - 48; \
            }                                        \
            n *= sign;                               \
        }                                            \
        return *this;                                \
    }

    defineInFor(int)
        defineInFor(unsigned int)
            defineInFor(long long)

        // fast output routines

        //#define putChar(c) putc_unlocked((c), stdout)
        inline void putChar(char c)
    {
        putc_unlocked(c, stdout);
    }
    inline IO &operator<<(char c)
    {
        putChar(c);
        return *this;
    }
    inline IO &operator<<(const char *s)
    {
        while (*s)
            putChar(*s++);
        return *this;
    }

    inline IO &operator<<(const string &s)
    {
        for (int i = 0; i < (int)s.size(); ++i)
            putChar(s[i]);
        return *this;
    }

    char *toString(double d)
    {
        sprintf(tmp, "%lf%c", d, '\0');
        return tmp;
    }
    inline IO &operator<<(double d) { return (*this) << toString(d); }

#define defineOutFor(intType)                   \
    inline char *toString(intType n)            \
    {                                           \
        char *p = (tmp + 30);                   \
        if (n)                                  \
        {                                       \
            bool isNeg = 0;                     \
            if (n < 0)                          \
                isNeg = 1, n = -n;              \
            while (n)                           \
                *--p = (n % 10) + '0', n /= 10; \
            if (isNeg)                          \
                *--p = '-';                     \
        }                                       \
        else                                    \
            *--p = '0';                         \
        return p;                               \
    }                                           \
    inline IO &operator<<(intType n) { return (*this) << toString(n); }

    defineOutFor(int)
        defineOutFor(long long)

#define endl ('\n')
#define cout __io__
#define cin __io__
} __io__;

int main()
{
    using namespace std;
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

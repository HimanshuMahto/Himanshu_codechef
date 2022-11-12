#include <iostream>
using namespace std;

void solve()
{
    int n, count = 0, zeros = 0, ones = 0;
    cin >> n;
    string s;
    cin >> s;
    if (n > 2)
    {
        if (s[0] == '0')
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i - 1] == '0' && s[i] == '1')
                {
                    ones += 1;
                }
            }
        }
        else
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (s[i - 1] == '1' && s[i] == '0')
                {
                    ones += 1;
                }
            }
        }
    }
    else
    {
        if ((s[0] == s[1] == '0') || (s[0] == s[1] == '1'))
            ones = 0;
        else
            ones = 1;
    }
    cout << ones << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

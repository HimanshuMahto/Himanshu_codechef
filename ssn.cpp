#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, max = 0;
        int c1 = 0, s1 = 0;
        cin >> n;
        int a[n], b[n], c[n], d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cin >> b[i];
            if (a[i] == b[i])
            {
                c1++;
            }
            c[i] = a[i] - b[i];
            d[i] = abs(a[i] - b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + c[i];
            s1 = s1 + (d[i]);
        }
        if (c1 == n)
        {
            cout << "0" << endl;
        }
        else if (sum == 0)
        {

            cout << s1 / 2 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}
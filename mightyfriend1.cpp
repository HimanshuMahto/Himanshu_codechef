#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        int n;
        cin >> n;
        vector<int> v(n, 0);
        vector<int> b;
        vector<int> a;
        int k = 0;
        j = 0;
        cin >> k;
        int e1 = 0, e2 = 0;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i % 2 == 0)
            {
                a.push_back(v[i]);
                e1 += v[i];
            }
            else
            {
                b.push_back(v[i]);
                e2 += v[i];
            }
        }

        while (k--)
        {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            swap(a[a.size() - 1], b[0]);
        }
        int sum1, sum2;
        sum1 = sum2 = 0;
        for (i = 0; i < a.size(); i++)
        {
            sum1 += a[i];
        }
        for (i = 0; i < b.size(); i++)
        {
            sum2 += b[i];
        }
        int f = 1;
        for (i = 1; i < n; i++)
        {
            if (v[i] != v[i - 1])
            {
                f = 0;
                break;
            }
        }
        if (sum1 > sum2 || f == 1)
        {
            cout << "NO\n";
        }
        else
        {

            cout << "YES\n";
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100001];
void solve()
{
    int n, Q;
    bool flag = false;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 2; i <= n; ++i)
        if (a[i] > a[1])
        {
            flag = true;
            Q = i;
            break;
        }
    if (!flag)
    {
        puts("-1");
        return;
    }
    cout << Q - 1 << endl;
    for (int i = 1; i < Q; ++i)
        cout << a[i] << ' ';
    cout << endl
         << n - Q + 1 << endl;
    for (int i = Q; i <= n; ++i)
        cout << a[i] << ' ';
    cout << endl;
}
signed main()
{
    srand(19260817);
    int T;
    cin >> T;
    while (T--)
        solve();
}
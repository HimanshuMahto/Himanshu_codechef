#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sltn()
{
    int n, check = 0, max;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 2; i <= n; ++i)
    {
        if (arr[i] > arr[1])
        {
            check = 1;
        }
    }
    if (check == 0)
    {
        cout << "-1" << endl;
        return;
    }
    cout << max - 1 << endl;
    for (int i = 1; i < max; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << n - max + 1 << endl;
    for (int i = max; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
else cout << "-1" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sltn();
    }
    return 0;
}

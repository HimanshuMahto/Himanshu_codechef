#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum1 = 0, sum2 = 0, f = 1;
        cin >> n;
        cin >> k;
        vector<int> arr;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                f = 0;
                break;
            }
        }
        if (f == 0)
        {
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                arr.push_back(x);
            }
            vector<int> m1;
            vector<int> m2;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    m1.push_back(arr[i]);
                }
                else
                {
                    m2.push_back(arr[i]);
                }
            }
            while (k--)
            {
                sort(m1.begin(), m1.end());
                sort(m2.begin(), m2.end());
                swap(m1[m1.size() - 1], m2[0]);
            }
            for (int i = 0; i < m1.size(); i++)
            {
                sum1 += m1[i];
            }
            for (int i = 0; i < m2.size(); i++)
            {
                sum2 += m2[i];
            }
        }
        if (sum1 > sum2 || f == 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}

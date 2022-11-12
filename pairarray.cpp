#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        long long int arrsize, maxprofit = 0;
        cin >> arrsize;
        long long int mkpair[arrsize];
        for (int start = 0; start < arrsize; start++)
        {
            cin >> mkpair[start];
        }
        sort(mkpair, mkpair + arrsize);
        set<pair<int, int>> pairss;
        pair<int, int> p1;
        for (int i = 0; i < arrsize / 2; i++)
        {
            long long int maxi = max(mkpair[i], mkpair[arrsize - i - 1]);
            long long int mini = min(mkpair[i], mkpair[arrsize - i - 1]);
            p1 = make_pair(maxi, mini);
            int s = pairss.size();
            pairss.insert(p1);
            int s1 = pairss.size();
            if (s == s1)
            {
                swap(mkpair[i], mkpair[i + 1]);
                i--;
            }
        }
        for (auto it : pairss)
        {
            maxprofit = maxprofit + abs(it.first - it.second);
        }
        cout << maxprofit << endl;
    }
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, c = 0;
    cin >> n;
    vector<int> arr;
    for (i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << arr.size() << endl;
    sort(arr.begin(), arr.end());
    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] == arr[i + 1])
        {
            c = arr[i];
            break;
        }
    }
    cout << c << endl;
}
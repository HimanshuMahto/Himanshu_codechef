#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void removeDuplicate(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    set<int, greater<int>> x;
    set<int, greater<int>>::iterator i;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        x.insert(arr[i]);
    }
    for (auto &i : x)
    {
        cout << i << endl;
    }
}
int main()
{
    int l;
    cin >> l;
    int arr[l];
    for (int i = 0; i < l; i++)
    {
        cin >> arr[l];
    }
    removeDuplicate(arr);
    return 0;
}
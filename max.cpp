#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7, 3};
    sort(arr, arr + 7, greater<int>()); // descending order of the array
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    vector<int> v;
    for (int i = 0; i < 7; i++)
    {
        v.push_back(i + 1);
    }
    // cout << v.max_size() << endl;
    // cout << *v.begin() << " " << *v.end() << endl;
    // for (auto it : v)
    // {
    //     cout << it << endl;   // auto is used for iterator.
    // }
    for (auto i = v.begin(); i < v.end(); i++)
    {
        cout << *i << endl;
    }
}
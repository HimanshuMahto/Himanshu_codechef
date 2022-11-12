#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int max = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[max])
                max = i;
        }
        if (max == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << max << endl;
            for (int i = 0; i < max; i++)
                cout << a[i] << " ";
            cout << endl;
            cout << n - max << endl;
            for (int i = max; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }

    return 0;
}
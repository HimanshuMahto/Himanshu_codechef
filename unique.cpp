#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int i, j, count = 0, c = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        cout << count << " ";
        if (count == 1)
        {
            c = a[i];
        }
    }
    cout << c;

    /**
     * Best solution of unique element of an array since xor of same elements are always zero so
     * a[]={2,3,4,1,2,4,3}
     * answer=1 as it present only one time
     * x=0;
     * for(i=0;i<n;i++)
     * {
     *      x=x^a[i];
     * }
     */
}
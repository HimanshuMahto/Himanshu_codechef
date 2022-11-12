#include <bits/stdc++.h>
using namespace std;
vector<int> tree[100001];
int val[100001];
int parent[100001];
int ans = INT_MIN;
void adoption(int vertex, int par)
{
    for (int child : tree[vertex])
    {
        if (child == par)
            continue;
        parent[child] = vertex;
        adoption(child, vertex);
    }
}
void bigboy(int vertex, int par)
{
    for (int child : tree[vertex])
    {
        if (child == par)
            continue;
        ans = max(ans, val[child]);
        bigboy(child, vertex);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        for (int i = 1; i <= n; i++)
            cin >> val[i];

        for (int i = 1; i < n; i++)
        {
            int n1, n2;
            cin >> n1 >> n2;
            tree[n1].push_back(n2);
            tree[n2].push_back(n1);
        }
        adoption(1, 0);
        while (q--)
        {
            int event;
            cin >> event;
            if (event == 1)
            {
                int prev, now;
                cin >> prev >> now;
                val[prev] = now;
            }
            else
            {
                int node;
                cin >> node;
                bigboy(node, parent[node]);
                cout << ans << endl;
                ans = INT_MIN;
            }
        }
    }
    return 0;
}
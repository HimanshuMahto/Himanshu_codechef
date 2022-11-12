#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,m,x,c;
        cin>>a>>b>>m;
        x=abs((m+a)-b);
        c=abs(a-b);
        int ans=min(x,c);
        cout<<ans<<endl;
    }
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,b,z,f,g,c,i;
        cin>>n>>m;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        x=a[n-1];
        y=a[n-2];
        z=x+y;
        b=(x-y);
        if(b<0)
        f=(m+b)%m;
        if(b>0)
        g=b%m;
        if(f>g)
        c=f;
        else
        c=g;
        cout<<c+z<<endl;
    }
}
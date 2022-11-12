#include<iostream>
#define ll long long int
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,j=0,c=0;
        cin>>n;
        ll a[n];
        int b;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(n>=1)
        {
            if(n>1)
            {
                for(i=0;i<n-1;i++)
                {
                    if(a[i]==a[i+1])
                    {
                        c++;
                    }
                    else
                    {
                        if(b<a[i]+c)
                        {   
                        //nothing
                        }
                        else if(b>a[i]+c)
                        {
                            b=a[i]+c;
                        }
                        c=0;
                    }
                }
            }
            if(n==1)
            {
                b=a[0];
            }
        }
        if(a[n-1]<b)
        cout<<b<<endl;
        else
        cout<<a[n-1]<<endl;
    }
}
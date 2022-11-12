#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,z,maxodd=0,c=0,ab;
        cin>>n;
        int i,a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
            {
                if(a[i]>maxodd)
                maxodd=a[i];
                c++;
            }
        }
        if(maxodd>0)
        {
            x=(maxodd)/2+1;
        }
        sort(a,a+n);
        int y=a[n-1];
        if(y%2==1)
        {

            z=(y/2)+1;
        }
        else
        z=y/2;
        ab=max(x,z);
        if(a[n-1]%2==0)
        {
            ab=ab+1;
        }
        cout<<ab<<endl;
    }
}
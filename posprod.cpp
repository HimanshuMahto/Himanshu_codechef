#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,countp=0,countn=0,count0=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            countn++;
            else if(a[i]>0)
            countp++;
            else
            count0++;
        }
        if(countn==n || countp==n)
        cout<<n*(n-1)/2<<endl;
        else
        {
            if(n%2==0)
            {
                if(countn==countp)
                cout<<n/2<<endl;
                else if(countn > countp)
                cout<<countn<<endl;
                else if(countn<countp)
                cout<<countp<<endl;
            }   
            else
            {
                if(countn==countp)
                cout<<countn<<endl;
                else if(countn>countp)
                cout<<countn<<endl;
                else if(countn<countp)
                cout<<countp<<endl;
            }
        }
    }
}
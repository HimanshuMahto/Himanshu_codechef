#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,sum,i;
        cin>>n>>x;
        int a[n];
        sum=n*x;
        if(n>0)
        {
        if(n%2==0)
        {
            for(i=1;i<n-1;i++)
            {
                if(i%2==0)
                a[i-1]=(i-1);
                else
                a[i-1]=-(i);
            }
            if(sum%2==0)
            {
                a[n-2]=(sum+2)/2;
                a[n-1]=(sum-2)/2;
            }
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
        }
        else
        {
            for(i=1;i<n;i++)
            {
                if(i%2==0)
                a[i-1]=(i-1);
                else
                a[i-1]=-(i);
            }
            a[n-1]=sum;
            for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    }
}
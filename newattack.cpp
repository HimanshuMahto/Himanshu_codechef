#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int ans; 
        ans=(n-1)*3;
        if(x>=1 && y>=1 && x<=n && y<=n)
        {
            if(n%2!=0)
        {
            if(x>n/2)
                x=n+1-x;
            if(y>n/2)
                y=n+1-y;
            int a=(x>y)?y:x;
            if(x==1||y==1||x==n||y==n)
            {
                ans=ans*1;
            }
            else if(x==y && x==(n/2)+1)
            {
                ans+=(n-1)*1;
            }
            else
            {
                ans+=(a-1)*2;
            }
        }
        else
        {
            if(x>n/2)
                x=n+1-x;
            if(y>n/2)
                y=n+1-y;
            int a=(x>y)?y:x;
            if(x==1||y==1||x==n||y==n)
            {
                ans=ans*1;
            }
            else
            {
                ans+=(a-1)*2;
            }
        }
        cout<<ans<<endl;
        }
        else
        cout<<"0"<<endl;
    }
}
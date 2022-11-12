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
        if(x==1||y==1||x==n||y==n)
        {
           ans=(n-1)*3;
        }
        else
        {
            ans=(n-1)*3;
            if(x>n/2)
                x=n+1-x;
            if(y>n/2)
                y=n+1-y;
            int a=(x>y)?y:x;
            if(n%2!=0 && x==y && x==(n/2)+1)
            {
                ans+=(n-1);
            }
            else
            {
                ans+=(a-1)*2;
            }
        }
        cout<<ans<<endl;
    }
}
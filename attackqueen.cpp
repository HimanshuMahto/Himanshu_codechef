#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,res,min,a,b;
        cin>>n>>x>>y;
        if(n%2==0)
        {
            if(x==1||y==1||x==n||y==n)
            {
                res=(n-1)*3;
            }
            else
            {
                if(x>n/2)
                {
                    x=n+1-x;
                }
                if(y>n/2)
                {
                    y=n+1-y;
                }
                min=(x>y)?y:x;
                res=(n-1)*3+(min-1)*2;
            }
        }
        if(n%2==1)
        {
            if(x==1||y==1||x==n||y==n)
            {
                res=(n-1)*3;
            }
            else if(x==y)
            {
                if(((x+y)-1)==n)
                {
                    res=8*(x-1);
                }
            }
            else
            {
                if(x>n/2)
                {
                    x=n+1-x;
                }
                if(y>n/2)
                {
                    y=n+1-y;
                }
                min=(x>y)?y:x;
                if(x==(n/2)+1)
                {
                    res=res+(n-1);
                }
                else
                {
                    res=res+(min-1)*2;
                }
            }
        }
        cout<<res<<endl;
    }
}






        
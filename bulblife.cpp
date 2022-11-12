#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,sum=0;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n-1;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if(((n*x)-sum)>0)
        cout<<(n*x)-sum<<endl;
        else
        cout<<"0"<<endl;
    }
}
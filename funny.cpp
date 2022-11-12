#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(a-b>2)
        {
            cout<<"0"<<endl;
        }
        else if(a-b==1 && (a!=1 && b!=1))
        {
            cout<<n/2<<endl;        
        }
        else if(a-b==1 && (a==1 || b==1))
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
    }
    return 0;
}
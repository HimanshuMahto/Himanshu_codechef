#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        x=x*2;
        y=y*1;
        if(x>y)
        cout<<"FIRST"<<endl;
        else if(x<y)
        cout<<"SECOND"<<endl;
        else if(x==y)
        cout<<"ANY"<<endl;
    }
}
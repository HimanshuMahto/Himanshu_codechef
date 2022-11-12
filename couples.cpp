#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x,y,b,a;
        cin>>x;
        b=(x*10)/100;
        a=100;
        if(a>b)
        cout<<a<<endl;
        else if(b>a)
        cout<<b<<endl;
        else if(a==b)
        cout<<b<<endl;
    }
}
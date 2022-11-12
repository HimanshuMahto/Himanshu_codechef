#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int z=x*3;
        int a=y*2;
        if(z>a)
        cout<<a<<endl;
        else if(a>z)
        cout<<z<<endl;
        else if(a==z)
        cout<<z<<endl;
    }
}
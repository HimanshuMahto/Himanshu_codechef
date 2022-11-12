#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int a=x*x;
    int b=y*y;
    int c=z*z;
    if(a>b && a>c)
    {
        if(a==(b+c))
        cout<<"Yes";
    }
    else if(b>a && b>c)
    {
        if(b==(a+c))
        cout<<"Yes";
    }
    else if(c>a && c>b)
    {
        if(c==(a+b))
        cout<<"Yes";
    }
    else
    cout<<"No";
    return 0;
}
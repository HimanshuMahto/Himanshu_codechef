#include<iostream>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int n;
        cin>>n;
        if(n>=2)
        {
            if(n%4==0)
            cout<<n+3<<endl;
            else if(n%4==3)
            cout<<"3"<<endl;
            else if(n%4==1)
            cout<<n<<endl;
            else if(n%4==2)
            cout<<"3"<<endl;
        }
    }
    return 0;
}
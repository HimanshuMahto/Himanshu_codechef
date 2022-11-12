#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        if(b-a>2)
        {
            if(a%2==0 && b%2==0) // ae be
            cout<<a<<" "<<a+2<<endl;
            else if(a%2==0 && b%2==1)
            cout<<a<<" "<<a+2<<endl;
            else if(a%3==0) //be ao3 
            cout<<a<<" "<<a+3<<endl;
            else if(a%2==1)// ao
            cout<<a+1<<" "<<a+3<<endl;
        }
        else if(a%2==0 && b%2==0 && b-a>1)
        cout<<a<<" "<<b<<endl;
        else
        cout<<"-1"<<endl;
    }
}
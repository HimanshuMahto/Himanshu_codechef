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
        if(x%3==0 && y%3==0)
        cout<<"0"<<endl;
        else if(x%2==0 && y%2==0)
        cout<<"0"<<endl;
        else if(x%3==0 && y%3!=0)
        cout<<"1"<<endl;
        else if(x%3!=0 && y%3==0)
        cout<<"1"<<endl;
        else if(x%2==0 && y%2!=0)
        cout<<"1"<<endl;
        else if(x%2!=0 && y%2==0)
        cout<<"1"<<endl;
        else if(x==1 && y==1)
        cout<<"1"<<endl;
        else 
        cout<<"1"<<endl;
    }
}
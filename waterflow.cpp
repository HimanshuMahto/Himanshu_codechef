#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if(x>(w+(y*z)))
        {
            cout<<"Unfilled"<<endl;
        }
        else if(x==(w+(y*z)))
        {
            cout<<"filled"<<endl;
        }
        else if(x<(w+(y*z)))
        {
            cout<<"overfilled"<<endl;
        }
    }
}
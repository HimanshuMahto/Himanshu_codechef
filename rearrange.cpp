#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,n,i,c=0;
        cin>>d;
        string s;
        cin>>s;
        for(i=0;i<d;i++)
        {
            if(s[i]=='0' || s[i]=='5')
            {
                c++;
            }
        }
        if(c>=1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
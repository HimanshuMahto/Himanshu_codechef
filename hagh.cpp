#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string sa;
        cin>>sa;
        int countone=0,countzero=0;
        for(int i=0;i<n;i++)
        {
            if(sa[i]=='1')
                countone++;
            else
                countzero++;
        }
        int ans=0,c0=0;
        int small=(countzero>countone)?countone:countzero;
        if((countzero==n) || (countone==n))
        {
             cout<<"0\n";
        }
        else if(n%2==0)
        {
            if(countzero==countone)
            {
                for(int i=0;i<n;i++)
                {
                    if(i%2==0 && sa[i]=='0')
                    {
                        c0++;
                    }
                }
                if(c0==n/2)
                {
                    cout<<n/2<<endl;
                }
            }

            if(countzero==countone)
            {
                cout<<(n/2)-1<<endl;
            }
            else
            {
                cout<<ans<<endl;
            }
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    string s,s1;
    while(t--)
    {
        int count=0,i;
        cin>>n;
        cin>>s;
        s1=s;
        for(i=0;i<n;i++)
        {
            sort(s1.begin(),s1.end());
            if(s1[0]==s1[n-1] && s1[0]!='1')
            break;
            else if(s1[0]!=s1[n-1] && s1[0]!='1')
            count++;
            else if(s1[0]=='1')
            count++;
        }
        for(int j=0;j<n;j++)
        {
            if(s[j]=='1')
            {
                s[j]=0;
                j++;
            }
        }
        cout<<count<<endl;
    }
}
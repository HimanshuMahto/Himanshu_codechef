#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,count0=0,count1=0,c0=0,c1=0;
        cin>>n;
        string array1;
        for(i=0;i<n;i++)
        {
            cin>>array1[i];
            if(array1[i]=='0')
            count0++;
            else
            count1++;
        }
        int small=(count0>count1)?count1:count0;
        if(count0==n || count1==n)
        cout<<"0"<<endl;
        
            else if((count0==1 || count1==1) && n!=2)
            {
                cout<<"1"<<endl;
            }
            else
            {
                if(n%2==0)
                {
                    if(count0==count1)
                    {
                        for(i=0;i<n;i++)
                        {
                            if(i%2==0 && array1[i]=='0')
                            c0++;
                        }
                        if(c0==n/2)
                        {
                            cout<<n/2<<endl;
                            continue;
                        }
                    }
                    if(count1==count0)
                    {
                        cout<<n/2-1<<endl;
                        continue;
                    }
                    else
                    {
                        cout<<small<<endl;
                        continue;
                    }
                }
                else
                {
                    cout<<small<<endl;
                    continue;
                }
            }
        }
    return 0;
}
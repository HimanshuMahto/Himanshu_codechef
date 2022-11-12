#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        if(n>1)
        {
            if(n%2==0)
            {
                for(i=0;i<n;i++)
                {
                    cout<<n+1-i<<" ";
                }
                cout<<endl;
            }
            else
            {
                if(n==1)
                cout<<-1<<endl;
                else if(n==3)
                cout<<-1<<endl;
                else
                {
                    cout<<"3 5 1 2 4";
                    for(i=n;i>=6;i--)
                    {
                        cout<<n+1-i;
                    }
                    cout<<endl;
                }
            }
        }
        else
        cout<<-1<<endl;
    }
}
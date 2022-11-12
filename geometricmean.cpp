#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,count1=0,coount1=0;
        cin>>n;
        int a[n];
        if(n>=3 && n<=1000)
        {
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]==1)
                coount1++;
                else if(a[i]==-1)
                count1++;
            }
            if(count1==coount1)
            cout<<"NO"<<endl;
            else if(abs(coount1-count1)==2)
            {
                //if(coount1%2==0)
                //{
                    if(count1%2==0)
                    cout<<"YES"<<endl;
                    else
                    cout<<"NO"<<endl;
                //}
                //else
                //cout<<"NO"<<endl;
            }
            else if(abs(count1-coount1)<2)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
    }
}
#include<iostream>
using namespace std;
int summ(int n)
{
    int d,sum=0;
    while(n!=0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,sum=0,sum1;
        long long int n;
        cin>>n;
        sum=summ(n);
        sum1=sum;
        if(sum%2==0)
        {
            while(sum1%2!=1)
            {
                n=n+1;
                sum1=summ(n);
            }
        }
        else
        {
            while(sum1%2!=0)
            {
                n=n+1;
                sum1=summ(n);
            }
        }
        cout<<n<<endl;
    }
}
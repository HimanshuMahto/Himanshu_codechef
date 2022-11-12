#include<iostream>
using namespace std;
void printArray(string s1,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<s1[i];
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count0=0,count1=0;
        cin>>n;
        string s; 
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            count1++;
            else
            count0++;
        }
        if(count0==n){
        printArray(s,n);
        printArray(s,n);}
        else if(count1==n){
        printArray(s,n);
        printArray(s,n);}
        else
        {
           if(count1) 
        }
    }
}
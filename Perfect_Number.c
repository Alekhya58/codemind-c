#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0,i;
    cin>>n;
    for(i=1;i<=n-1;i++)
    {
        r=n%i;
        if(r==0)
        {
            s+=i;
        }
    }
    if(s==n)
    {
        cout<<"True";
    }
    else
    {
         cout<<"False";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int n,p=1,s=0,r;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        s+=r;
        p*=r;
        n/=10;
    }
    if(s==p)
    {
       cout<<"Spy Number";
    }
    else
    {
        cout<<"Not Spy Number";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int n,s=0,r,sq;
    cin>>n;
    sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        s+=r;
        sq/=10;
    }
    if(n==s)
    {
        cout<<"Neon Number";
    }
    else
    {
        cout<<"Not Neon Number";
    }
}
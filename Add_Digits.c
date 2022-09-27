#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cin>>n;
    while(n/10!=0){
        s=0;
    while(n!=0)
    {
        r=n%10;
        s+=r;
        n=n/10;
    }
    n=s;
    }
    cout<<s;
}
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int p,r,t;
    double ci;
    cin>>p>>r>>t;
    ci=pow((1+r/100.00),t);
    cout<<setprecision(2)<<fixed;
    cout<<p*ci;
}
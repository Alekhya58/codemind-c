#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float r;
    float area;
    float const pi=3.14;
    cin>>r;
    area=pi*r*r;
    cout<<setprecision(2);
    cout<<fixed;
	cout<<area;
}
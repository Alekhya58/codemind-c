#include<stdio.h>
int main()
{
    int n,s1,s2,r1=0,r2=0;
    scanf("%d",&n);
    s1=n*n;
    while(n>0)
    {
        r1=r1*10;
        r1=r1+n%10;
        n=n/10;
    }
    s2=r1*r1;
    while(s2>0)
    {
        r2=r2*10;
        r2=r2+s2%10;
        s2=s2/10;
    }
    if(s1==r2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
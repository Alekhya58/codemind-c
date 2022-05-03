#include<stdio.h>
int main()
{
    int n,sq1,sq2,re1=0,re2=0;
    scanf("%d",&n);
    sq1=n*n;
    while(n>0)
    {
        re1=re1*10;
        re1=re1+n%10;
        n=n/10;
    }
    sq2=re1*re1;
    while(sq2>0)
    {
        re2=re2*10;
        re2=re2+sq2%10;
        sq2=sq2/10;
    }
    if(sq1==re2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
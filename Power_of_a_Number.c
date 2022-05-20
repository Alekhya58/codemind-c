#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,r=0;
    scanf("%d%d%d",&a,&b,&c);
    d=pow(a,b);
    r=d%c;
    printf("%d",r);
}
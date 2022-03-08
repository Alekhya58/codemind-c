#include<stdio.h>
int main()
{
    int sum=0,product=1,n;
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n%10;
        product*=n%10;
        n/=10;
    }
    printf("%d",product-sum);
}
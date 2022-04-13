#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    scanf("%d",&num);
    while(num/10!=0)
    {
        sum=0;
        while(num!=0)
        {
           rem=num%10;
           sum+=rem;
           num=num/10;
        }
        num=sum;
    }
    printf("%d",sum);
    
    return 0;
}
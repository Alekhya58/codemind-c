#include<stdio.h>
int main()
{
    int num,rem=0;
    scanf("%d",&num);
    int num2=num;
    int sum=0;
    while(num!=0)
    {
       int  rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    if(num2%sum==0)
        printf("True");
    else
        printf("False");
    
    
}
#include<stdio.h>
int count_no_divisors(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
            
        }
    }
    return count;
}
void check_9_factors(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(count_no_divisors(i)==9)
        {
            printf("%d ",i);
            c=c+1;
        }
    }
    printf("
Total=%d
",c);
}
int main()
{
    int n,c;
    scanf("%d",&n);
    check_9_factors(n);
    
}
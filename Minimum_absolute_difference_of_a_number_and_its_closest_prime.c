#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int i,fc=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fc++;
        }
    }
    if(fc==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,pp,np,r1,r2;
    float sq;
    scanf("%d",&n);
    if(is_prime(n))
    {
        printf("0");
    }
    else
    {
        for(pp=n-1;!is_prime(pp);pp--);
        for(np=n+1;!is_prime(np);np++);
        r1=np-n;
        r2=n-pp;
        if(r1>r2)
        {
            printf("%d",r2);
        }
        else
        {
            printf("%d",r1);
        }
    }
}
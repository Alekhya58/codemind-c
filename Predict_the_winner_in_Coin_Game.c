#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n%2==0 || m%2==0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
}
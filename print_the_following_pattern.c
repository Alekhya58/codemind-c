#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        for(j=1;j<=i+1;j++)
        {
            printf("%c ",65+i);
        }
        printf("
");
    }
}
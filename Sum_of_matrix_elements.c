#include<stdio.h>
int main()
{
    int n[12][12],i,j,r,c,s=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
         {
             scanf("%d",&n[i][j]);
         }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s=s+n[i][j];
        }
    }
    printf("%d",s);
}
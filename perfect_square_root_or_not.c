#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float k;
    scanf("%d",&n); 
    k=sqrt((double)n);
    i=k;
    if(i==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
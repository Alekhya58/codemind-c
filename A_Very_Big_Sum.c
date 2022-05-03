#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    long int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    printf("%ld",s);
}
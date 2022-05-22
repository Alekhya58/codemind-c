#include<stdio.h>
int strictly_even(int *arr,int n)
{
    int i,e=0,ei=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            e++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && i%2==0)
        {
            ei++;
        }
    }
    if(e==ei)
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
    int arr[100],x,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    x=strictly_even(arr,n);
    if(x==1)
    {
        printf("True");
    }
    if(x==0)
    {
        printf("False");
    }
}
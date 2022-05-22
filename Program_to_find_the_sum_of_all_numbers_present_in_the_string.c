#include<stdio.h>
int main()
{
    int i,s=0;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]<='9' && str[i]>='0')
        {
            s=s+(str[i]-'0');
        }
    }
    printf("%d",s);
}
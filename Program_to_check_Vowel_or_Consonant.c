#include<stdio.h>
int main()
{
    char ch;
    int n,m;
    scanf("%c",&ch);
    n=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    m=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
    if(n||m)
       printf("Vowel");
    else
        printf("Consonant");
}
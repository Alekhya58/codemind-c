#include<stdio.h>
int main()
{ 
   float Celsius, Fahrenheit;
   scanf("%f",&Fahrenheit);
   Celsius=(Fahrenheit-32)*5/9;
   printf("%.2f",Celsius);
}   
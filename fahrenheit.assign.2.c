#include<stdio.h>
#include<conio.h>
int main ()
{
int a;
float f, c, fa, Celsius;
printf("Enter the value:");
scanf("%d", &a);
if(a==1)
{
printf("Celsius to Fahrenheit conversion:\n");
printf("Enter Celsius:");
scanf("%f",&c);
fa=c*(9/5.0)+32;
printf("Fahrenheit is %f", fa);
 }
 else
 {
 
 printf("Fahrenheit to Celsius conversion:\n");
printf("Enter Fahrenheit:");
scanf("%f", &f);
Celsius =(f-32)*(5/9.0);
printf("Celsius is %f", Celsius);
 }
return 0;
}


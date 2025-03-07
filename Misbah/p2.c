#include<stdio.h>
int main()
{
float f,c;
printf("enter temperature in fahrenheit:");
scanf("%f",&f);
c=(f-32)*5/9;
printf("temprature in celsius=%f",c);
return 0;
}

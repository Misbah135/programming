#include<stdio.h>
int main()
{
float basic,bonus,commission,totalsales,totalsalary;
int itemsSold;
printf("enter the basic salary:");
scanf("%f",&basic);
printf("enter the bonus per item Sold:");
scanf("%f",&bonus);
printf("enter the commission percentage:");
scanf("%f",&commission);
printf("enter the number of items Sold:");
scanf("%d",&itemsSold);
printf("enter the total monthly sales:");
scanf("%f",&totalsales);
bonus=itemsSold*bonus;
commission=(commission/100)*totalsales;
totalsalary=basic+bonus+commission;
printf("the total Salary of the saleman is:%.2f\n",totalsalary);
return 0;
}

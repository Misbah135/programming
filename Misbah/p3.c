#include<stdio.h>
int main()
{
int totDays,mon,remDay;
printf("enter the total number of days:");
scanf("%d", &totDays);
mon=totDays/30;
remDay=totDays % 30;
printf("%d days=%d months and %d days\n",totDays,mon,remDay);
return 0;
}


#include<stdio.h>
#include<ctype.h>
int main()
{
char str[10];
printf("enter a lowercase letter:");
fgets(str,sizeof(str),stdin);
for(int i=0;str[i]!='\0';i++)
{
str[i]=toupper(str[i]);
}
printf("string in uppercase letter is:%s\n",str);
return 0;
}

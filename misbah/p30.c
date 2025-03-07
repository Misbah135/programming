#include<stdio.h>
void reverse(char*str)
{
char*end=str,temp;
while(*end)
end++;
end--;
while(str<end)
{
temp=*str;
*str=*end;
*end=temp;
str++;
end--;
}
}
int main()
{
char str[]="Hello";
printf("orginal:%s\n",str);
reverse(str);
printf("revered:%s\n",str);
return 0;
}

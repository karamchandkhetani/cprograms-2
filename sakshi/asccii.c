#include<stdio.h>
int main()
{
char ch;
printf("enter character");
scanf("%c",&ch);
if(ch>=65&&ch<=90)
{
printf("uppercase");
}
else if(ch>=97&&ch<=127)
{
printf("lowercase");
}
else if(ch>=48&&ch<=57)
{
printf("digit");
}
else if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
{
printf("special symbol");
}
return 0;
}
 


#include<stdio.h>
int add();
int main()
{
int s;
printf("addition of 2 number");
s=add();
printf("sum=%d",s);
return 0;
}
int add()
{
int a,b,c;
printf("\n enter the value of a and b");
scanf("%d%d",&a,&b);
c=a+b;
return(c);
}









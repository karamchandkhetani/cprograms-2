#include<stdio.h>
int power(int ,int );
float factorial(int);
int main()
{
int terms,i;
float sum=0.0;
printf("enter the terms");
scanf("%d",&terms);
i=1;
while(i<=terms)
{
sum = sum+power(i,2)/factorial (i);
i++;
}
printf("sum of digits is %f",sum);
return 0;
}
int power(int a,int b)
{
int i,p=1;
for(i=1;i<=b;i++)
p=p*a;
return (p);
}
float factorial(int n)
{
int i;
float f=1;
for(i=1;i<=n;i++)
f=f*i;
return (f);
}


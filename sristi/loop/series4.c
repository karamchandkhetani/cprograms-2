#include<stdio.h>
int main()
{
 int i,j,term,f,p,k;
 float sum=0;
 printf("Enter the number of terms=");
 scanf("%d",&term);

 for(i=1;i<=term;i++)
 {
  f=1;p=1;
  for(j=1;j<=i;j++)
  f=f*j;

  for(k=1;k<=i;k++)
  p=p*i;

  if(i%2==0)
  sum=sum-p/(float)f;

  else
  sum=sum+p/(float)f;
 }
 printf("Sum of series=%.2f\n",sum);

 return 0;
}

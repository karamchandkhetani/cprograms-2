#include<stdio.h>
int main()
{
 int i,j,k,n,s;
 printf("Enter the number of rows and columns=");
 scanf("%d",&n);

 s=1;

 for(i=1;i<=n;i++)
 {
  for(j=1;j<=(n-i);j++)
  printf(" ");

  for(k=1;k<=i;k++)
  printf("%d",s++);

  printf("\n");
 }

 return 0;
}

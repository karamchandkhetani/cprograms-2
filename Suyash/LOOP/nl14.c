#include<stdio.h>

int main()
{
int i,j,k,n;

printf("\nEnter the no. of rows : ");
	scanf("%d",&n);


printf("\nRequired Pattern is : \n");

	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
			printf("  ");
		for(k=1;k<=i;k++)
			printf("%d ",n--);
	printf("\n");	
	}

return 0;

}

#include<stdio.h>
int main()
{
	int i,j,n,c;
	scanf("%d",&n);
	c=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
			c++;
		}
		printf("\n");
	}
	return 0;
	}

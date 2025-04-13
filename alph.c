#include <stdio.h>
int main()
{
	int i,j,k,n;
	char c=65;
	/*ascii code is required for alphabets*/
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*(n-i);j++)
		{
			printf(" ");
		}
		for(k=0;k<2*i+1;k++)
		{
			printf("%c ",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}

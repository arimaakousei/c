#include<stdio.h>
int main()
{
	int i,totalcoins,n;
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		totalcoins+=i;
	}
	printf("Total coins required: %d\n", totalcoins);
}

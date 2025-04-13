#include <stdio.h>

int main() {
	int n,i,sum=0,rem;
	long int fact=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    fact=fact*i;
	}
	while(fact>0)
	{
	    rem=fact%10;
	    sum=sum+rem;
	    fact=fact/10;
	}
	
	printf("%d",sum);
}

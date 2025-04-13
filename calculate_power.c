#include <stdio.h>
#include <math.h> 
int main()
{
	int base , exponent , power;
	printf("enter exponent: \n");
	printf("enter base: \n");
	scanf("%d%d",&base , &exponent);
	power=pow(base,exponent);
	printf("enter the power: %d\n");
	return 0;
}

#include <stdio.h>
int main()
{
	int quantity, price;
	printf("quantity of items: ",quantity);
	scanf("%d",&quantity);
	printf("price of item: ",price);
	scanf("%d",&price);
	int tot= quantity*price;
	if(quantity>5)
	{
		int b= tot-(tot*0.1);
		printf("final price customer have to pay.%d\n",b);
	}
	else
	{
		printf("final price customer have to pay.%d\n",tot);
	}
	return 0;
}

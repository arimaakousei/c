#include<stdio.h>
int main()
{
	int x,y;
	printf("value of x and y: ");
	scanf("%d %d",&x,&y);
	y=x++ + ++y;
	printf("%d",y);
	return 0;
}

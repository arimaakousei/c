#include <stdio.h>
int main()
{
	int i;
	char name[20];
	printf("enter your name: ");
	scanf("%s",&name);
	while(i<=10)
	{
		printf("%s",name);
		i++;
	}
	return 0;
}

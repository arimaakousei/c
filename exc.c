#include <stdio.h>
int main ()
{
	int a = 10, b= 10;
	int *p1, *p2;
	p1=&a;
	p2=&b;
	printf("%d\n",(*p1)++);
	printf("%d\n",--(*p2));
	printf("%d\n",*p1 || (p2)--);
	printf("%d\n",++(*p2)-*p1);
	
}

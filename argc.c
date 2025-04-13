#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[5])
{
	int a= atoi(argv[1]);
	int b= atoi(argv[2]);
	printf("%d\n",a+b);
	printf("%d\n",argc);
	printf("%s\n",argv[0]);
}

#include <stdio.h>

int main() {
	FILE *fp;
	int i;
	float sal[10];
	for(i=0;i<10;i++){
		scanf("%f",&sal[i]);
	}
	fp=fopen("sal.txt","w");
	for(i=0;i<10;i++)
	{
		fprintf(fp,"%f",sal[i]);
	}
	fclose(fp);
	fp=fopen("sal.txt","r");
	for(i=0;i<10;i++)
	{
		fscanf(fp,"%f",&sal[i]);
	}
	printf("least sal: %f\n",sal[0]);
	printf("first highest sal: %f\n",sal[9]);
	printf("second highest sal: %f\n",sal[8]);
}

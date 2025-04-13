
#include<stdio.h>
int main()
{

int ID;
long long int Phonenumber;
float CGPA;
char Name [10], Branch [10], Gender [10];
printf("Enter the student name: ");
scanf("%s", &Name);
printf("Enter the student ID: ");
scanf("%d",&ID);
scanf("%s", &Gender);
scanf("%s", &Branch);
printf("Enter the student Gender: ");
printf("Enter the student Branch: ");
printf("Enter the student Phonenumber: ");

scanf("%1f",&Phonenumber);

printf("Enter the student CGPA: ");

scanf("%f",&CGPA);

printf("Name-%s\n", Name);

printf("ID-%d\n", ID); printf("Gender-%s\n", Gender);

printf("Branch-%s\n", Branch);
printf("Phone number-X1f\n", Phonenumber);
printf("CGPA-XF\n",CGPA);
return 0;
}

#include <stdio.h>

int main() {
    char name[100];
    char id[10];
    char gender[10];
    char department[100];
    char phone[15];
    float intermediateCGPA;

    // Taking input from the user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Using fgets to allow spaces in name

    printf("Enter the last 5 digits of your ID number: ");
    fgets(id, sizeof(id), stdin);

    printf("Enter your gender: ");
    fgets(gender, sizeof(gender), stdin);

    printf("Enter your department name: ");
    fgets(department, sizeof(department), stdin);

    printf("Enter your phone number: ");
    fgets(phone, sizeof(phone), stdin);

    printf("Enter your intermediate CGPA: ");
    scanf("%f", &intermediateCGPA);

    // Displaying the details
    printf("\n--- Your Details ---\n");
    printf("Name: %s", name);
    printf("Last 5 digits of ID Number: %s", id);
    printf("Gender: %s", gender);
    printf("Department: %s", department);
    printf("Phone Number: %s", phone);
    printf("Intermediate CGPA: %.2f\n", intermediateCGPA);

    return 0;
}


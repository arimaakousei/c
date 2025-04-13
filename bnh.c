#include <stdio.h>

int main() {
    int num = 1,i,j; // Start from 1

    for (i = 1; i <= 4; i++) { // Loop for 4 rows
        for ( j = 1; j <= i; j++) { // Each row has 'i' numbers
            printf("%d", num++);
            if (j < i) {
                printf("*"); // Print '*' between numbers in a row
            }
        }
        printf("\n"); // New line after each row
    }

    return 0;
}


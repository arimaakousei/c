#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    double discriminant;

    // Input coefficients
    printf("Enter the coefficients A, B, and C of the quadratic equation: ");
    scanf("%d %d %d", &A, &B, &C);

    // Calculate the discriminant
    discriminant = B * B - 4 * A * C;

    // Check the nature of the roots
    if (discriminant < 0) {
        printf("Roots are imaginary\n");
    } else if (discriminant > 0) {
        printf("Roots are real and distinct\n");
    } else {
        printf("Roots are real and equal\n");
    }

    return 0;
}

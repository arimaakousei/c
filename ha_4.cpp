#include <stdio.h>

int isPowerOfTwo(int n) {
    // A number is a power of two if it is greater than 0
    // and (n & (n - 1)) is 0
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is a power of two
    if (isPowerOfTwo(num)) {
        printf("%d is a power of two.\n", num);
    } else {
        printf("%d is not a power of two.\n", num);
    }

    return 0;
}


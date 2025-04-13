#include <stdio.h>
    int main() {
    int i,n;
    scanf("%d",&n);
    // Number for which we want the factorial
    int factorial = 1;

    // Using for loop to calculate factorial
    for(i = 1; i <= n; i++) 
	{
        factorial *= i;
    }
    printf("The factorial of %d is: %d\n", n, factorial);
    return 0;
}


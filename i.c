#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    if (n <= 1) {
        printf("not a prime\n");
        return 0;
    }

    for (i = 2; i * i <= n ; i++) {
        if (n % i == 0) {
            printf("not a prime\n");
            return 0;
        }
    }

    printf("prime\n");
    return 0;
}

#include <stdio.h>

int main() {
    int m[10], i, sum = 0, avg = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &m[i]);
        sum= sum+ m[i];
    }

    avg = sum / 10;
    printf("sum= %d\n", sum);
    printf("avg= %d\n", avg);

    return 0;
}

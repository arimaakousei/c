#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int totalLeaves = 4 + (N - 1) * 3;

    printf("%d\n", totalLeaves);

    return 0;
}

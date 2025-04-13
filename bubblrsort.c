#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j,k, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        // Print the array after the fifth pass
        if (i == 4) {
            printf("After the fifth pass: ");
            for ( k = 0; k < n; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }
}

int main() {
    int arr[] = {94, 78, 65, 45, 58, 72, 63, 12, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    return 0;
}

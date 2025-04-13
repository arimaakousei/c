#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {4, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 58, 65, 80, 98};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 25;

    int result = binarySearch(arr, n, x);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}

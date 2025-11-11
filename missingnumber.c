#include <stdio.h>

int findMissingBinary(int arr[], int n) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] != mid + 1 && arr[mid - 1] == mid)
            return mid + 1;
        if (arr[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Missing number (Binary Search): %d\n", findMissingBinary(arr, n));
    return 0;
}

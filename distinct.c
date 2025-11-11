#include <stdio.h>

int main() {
    int n, i, j, count = 0, distinct;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        distinct = 1;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                distinct = 0;
                break;
            }
        }
        if(distinct)
            count++;
    }

    printf("Total distinct elements: %d", count);
    return 0;
}

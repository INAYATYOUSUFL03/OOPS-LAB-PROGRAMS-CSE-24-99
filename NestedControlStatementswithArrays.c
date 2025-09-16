#include <stdio.h>

int main() {
    int arr[20], n, target;
    int i, j, sum, mask;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

   
    for (mask = 0; mask < (1 << n); mask++) {
        sum = 0;

        printf("{ ");
        for (j = 0; j < n; j++) {
            if (mask & (1 << j)) {
                sum += arr[j];
                printf("%d ", arr[j]);
            }
        }
        printf("}");

        if (sum == target) {
            printf(" ?");
        }
        printf("\n");
    }

    return 0;
}


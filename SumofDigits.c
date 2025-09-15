#include <stdio.h>
int main() {
    int n, sum = 0, prod = 1, digit;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        prod *= digit;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Product of digits = %d\n", prod);

    return 0;
}

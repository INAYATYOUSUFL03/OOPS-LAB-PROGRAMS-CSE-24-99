#include <stdio.h>

int isPrime(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, i = 2;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}



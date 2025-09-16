#include <stdio.h>

int fact(int n) {
    int f = 1;
    int i;
    for (i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int gcd(int a, int b) {
    int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int choice, n, a, b;

    do {
        printf("\nMenu:\n");
        printf("1. Factorial of a number\n");
        printf("2. GCD of two numbers\n");
        printf("3. LCM of two numbers\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter number: ");
            scanf("%d", &n);
            printf("Factorial = %d\n", fact(n));
        }
        else if (choice == 2) {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("GCD = %d\n", gcd(a, b));
        }
        else if (choice == 3) {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("LCM = %d\n", lcm(a, b));
        }
        else if (choice == 4) {
            printf("Exiting...\n");
        }
        else {
            printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}


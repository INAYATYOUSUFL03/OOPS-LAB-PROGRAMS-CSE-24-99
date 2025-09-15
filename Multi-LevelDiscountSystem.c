#include <stdio.h>

int main() {
    float amount, discount = 0;
    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount < 100)
        discount = 0;
    else if (amount <= 500)
        discount = 0.10 * amount;
    else if (amount <= 1000)
        discount = 0.15 * amount;
    else
        discount = 0.20 * amount;

    printf("Discount = %.2f\nTotal Price = %.2f\n", discount, amount-discount);
    return 0;
}

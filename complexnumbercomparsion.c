#include <stdio.h>
#include <math.h>
int main() {
    float a1, b1, a2, b2;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &a1, &b1);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &a2, &b2);

    float mag1 = sqrt(a1*a1 + b1*b1);
    float mag2 = sqrt(a2*a2 + b2*b2);

    if (mag1 > mag2)
        printf("First complex number is larger.\n");
    else if (mag2 > mag1)
        printf("Second complex number is larger.\n");
    else
        printf("Equal\n");

    return 0;
}

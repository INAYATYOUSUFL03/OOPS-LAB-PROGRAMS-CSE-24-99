#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Invalid Equation (a must not be 0)\n");
    } else {
        d = b*b - 4*a*c;
        if (d > 0) {
            root1 = (-b + sqrt(d)) / (2*a);
            root2 = (-b - sqrt(d)) / (2*a);
            printf("Real and Distinct Roots: %.2f, %.2f\n", root1, root2);
        } else if (d == 0) {
            root1 = -b / (2*a);
            printf("Real and Equal Roots: %.2f, %.2f\n", root1, root1);
        } else {
            float real = -b / (2*a);
            float imag = sqrt(-d) / (2*a);
            printf("Imaginary Roots: %.2f+%.2fi , %.2f-%.2fi\n", real, imag, real, imag);
        }
    }
    return 0;
}

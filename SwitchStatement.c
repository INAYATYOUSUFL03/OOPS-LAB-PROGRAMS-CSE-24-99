#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float divide(float a, float b) { return b != 0 ? a / b : 0; }
int mod(int a, int b) { return b != 0 ? a % b : 0; }

int main() {
    int choice;
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Choose operation: 1(+),2(-),3(*),4(/),5(%%): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Result = %.2f\n", add(a,b)); break;
        case 2: printf("Result = %.2f\n", sub(a,b)); break;
        case 3: printf("Result = %.2f\n", mul(a,b)); break;
        case 4: printf("Result = %.2f\n", divide(a,b)); break;
        case 5: printf("Result = %d\n", mod((int)a,(int)b)); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}


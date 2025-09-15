#include <stdio.h>

int main() {
    float a, b, result;
    char op;

    printf("Enter expression (a operator b): ");
    scanf("%f %c %f", &a, &op, &b);

    result = (op == '+') ? (a+b) :
             (op == '-') ? (a-b) :
             (op == '*') ? (a*b) :
             (op == '/' && b!=0) ? (a/b) :
             (op == '%' && (int)b!=0) ? (int)a % (int)b : 0;

    if ((op == '/' && b==0) || (op == '%' && (int)b==0))
        printf("Error: Division by zero\n");
    else if (result == 0 && !(a==0 && op=='+' && b==0))
        printf("Invalid Operator\n");
    else
        printf("Result = %.2f\n", result);

    return 0;
}

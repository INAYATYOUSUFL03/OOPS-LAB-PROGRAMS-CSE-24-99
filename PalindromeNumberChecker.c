#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    return (rev == n);
}

int main() {
    int n, start, end;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is NOT a Palindrome\n", n);

    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Palindrome numbers between %d and %d:\n", start, end);
    for (int i=start; i<=end; i++) {
        if (isPalindrome(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}

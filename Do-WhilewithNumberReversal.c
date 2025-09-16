#include <stdio.h>

int main() {
    int num, rev;
    do {
        printf("Enter a positive number (0 to stop): ");
        scanf("%d", &num);
        rev = 0;
        int temp = num;
        while(temp > 0) {
            rev = rev*10 + temp%10;
            temp /= 10;
        }
        if(num != 0) printf("Reversed: %d\n", rev);
    } while(num != 0);
    return 0;
}


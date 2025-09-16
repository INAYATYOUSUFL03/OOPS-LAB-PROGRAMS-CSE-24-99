#include <stdio.h>
#include <math.h>

int main() {
    int n, x, y;
    printf("Enter n: ");
    scanf("%d", &n);

    for (x = 0; x <= sqrt(n); x++) {
        for (y = 0; y <= sqrt(n); y++) {
            if (x*x + y*y == n) {
                printf("(%d, %d)\n", x, y);
                break; 
            }
        }
    }
    return 0;
}


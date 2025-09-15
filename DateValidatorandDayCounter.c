#include <stdio.h>

int isLeap(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main() {
    int d, m, y;
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter date (DD-MM-YYYY): ");
    scanf("%d-%d-%d", &d, &m, &y);

    if (m < 1 || m > 12) {
        printf("Invalid Date (Month out of range)\n");
        return 0;
    }

    if (isLeap(y)) daysInMonth[2] = 29;

    if (d < 1 || d > daysInMonth[m]) {
        printf("Invalid Date (Day out of range)\n");
        return 0;
    }

    printf("Valid Date: %02d-%02d-%04d\n", d, m, y);
    int q = d;
    int mm = m;
    int yy = y;

    if (mm == 1 || mm == 2) {
        mm += 12;
        yy -= 1;
    }

    int k = yy % 100;     
    int j = yy / 100;    
    int h = (q + (13 * (mm + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;

    char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    printf("Day of the Week: %s\n", days[h]);

    return 0;
}

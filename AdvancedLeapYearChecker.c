#include <stdio.h>

int main() {
    int year, i, count = 0;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year%4==0 && year%100!=0) || (year%400==0))
        printf("%d is a Leap Year.\n", year);
    else {
        printf("%d is not a Leap Year.\nNext 5 leap years: ", year);
        i = year+1;
        while (count < 5) {
            if ((i%4==0 && i%100!=0) || (i%400==0)) {
                printf("%d ", i);
                count++;
            }
            i++;
        }
        printf("\n");
    }
    return 0;
}

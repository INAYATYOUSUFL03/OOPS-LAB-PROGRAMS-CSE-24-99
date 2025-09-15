#include <stdio.h>
int main() {
    int marks[5], i, failCount = 0, total = 0;
    float percentage;

    printf("Enter marks in 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
        if (marks[i] < 40) failCount++;
    }

    percentage = total / 5.0;

    if (failCount > 1)
        printf("Result: Repeat Year\n");
    else if (percentage >= 90)
        printf("Grade: A\n");
    else if (percentage >= 75)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}

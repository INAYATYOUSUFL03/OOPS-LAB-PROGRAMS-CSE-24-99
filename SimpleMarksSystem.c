#include <stdio.h>
int main() {
    int marks[5], total=0;
    float average, percentage;
    printf("Enter marks of 5 subjects: ");
    for(int i=0; i<5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("Total = %d\nAverage = %.2f\nPercentage = %.2f%%\n", total, average, percentage);

    if(percentage >= 90) printf("Grade: A\n");
    else if(percentage >= 75) printf("Grade: B\n");
    else if(percentage >= 50) printf("Grade: C\n");
    else printf("Grade: F\n");

    return 0;
}

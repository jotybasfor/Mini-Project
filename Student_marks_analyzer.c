#include <stdio.h>

int main() {
    int n, i;
    float marks[100], total = 0, average;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    average = total / n;

    printf("\nTotal Marks of all students: %.2f\n", total);
    printf("Average Marks of the class: %.2f\n", average);

    return 0;
}
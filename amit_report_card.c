#include <stdio.h>

int main() {
    int n, marks, max, min;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    printf("Enter marks: ");
    scanf("%d", &marks);
    max = min = marks;

    for (int i = 1; i < n; i++) {
        scanf("%d", &marks);
        if (marks > max)
            max = marks;
        if (marks < min)
            min = marks;
    }

    printf("Highest = %d\n", max);
    printf("Lowest = %d\n", min);

    return 0;
}
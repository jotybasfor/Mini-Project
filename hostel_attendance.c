#include <stdio.h>

int main() {

    int attendance[10][7];
    int i, j;

    printf("Enter attendance data (1 = Present, 0 = Absent)\n");

    for (i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (j = 0; j < 7; j++) {
            printf(" Day %d: ", j + 1);
            scanf("%d", &attendance[i][j]);
        }
    }

    int total_present[10] = {0};
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            total_present[i] += attendance[i][j];
        }
    }

    int max_attendance = total_present[0];
    int max_student = 1;
    for (i = 1; i < 10; i++) {
        if (total_present[i] > max_attendance) {
            max_attendance = total_present[i];
            max_student = i + 1;
        }
    }

    int day_total[7] = {0};
    for (j = 0; j < 7; j++) {
        for (i = 0; i < 10; i++) {
            day_total[j] += attendance[i][j];
        }
    }

    int min_attendance = day_total[0];
    int min_day = 1;
    for (j = 1; j < 7; j++) {
        if (day_total[j] < min_attendance) {
            min_attendance = day_total[j];
            min_day = j + 1;
        }
    }

    printf("\n==============================\n");
    printf("     Weekly Attendance Report\n");
    printf("==============================\n");

    printf("\nTotal Present Days of Each Student:\n");
    for (i = 0; i < 10; i++) {
        printf(" Student %d: %d days\n", i + 1, total_present[i]);
    }

    printf("\nStudent With Highest Attendance: Student %d (%d days)\n",
           max_student, max_attendance);

    printf("Day With Lowest Attendance: Day %d\n", min_day);

    return 0;
}


int main() {
    int marks[5][3];

    int math_max, phy_max, cs_max;

    printf("Enter marks of 5 students in 3 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    math_max = marks[0][0];
    phy_max = marks[0][1];
    cs_max = marks[0][2];

    for (int i = 1; i < 5; i++) {
        if (marks[i][0] > math_max) {
            math_max = marks[i][0];
        }
        if (marks[i][1] > phy_max) {
            phy_max = marks[i][1];
        }
        if (marks[i][2] > cs_max) {
            cs_max = marks[i][2];
        }
    }

    printf("Highest marks in Mathematics: %d\n", math_max);
    printf("Highest marks in Physics: %d\n", phy_max);
    printf("Highest marks in Computer Science: %d\n", cs_max);

    return 0;
}
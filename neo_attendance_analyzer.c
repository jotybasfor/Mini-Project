int main() {
    int n, i, x, present = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == 1) present++;
    }

    printf("Present: %d\n", present);
    printf("Absent: %d\n", n - present);

    return 0;
}
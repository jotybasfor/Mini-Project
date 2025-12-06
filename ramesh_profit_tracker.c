int main() {
    int n, i, x, profit = 0, loss = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > 0) profit += x;
        else loss += x;
    }

    printf("Total Profit: %d\n", profit);
    printf("Total Loss: %d\n", -loss);
    printf("Net Balance: %d\n", profit + loss);

    return 0;
}

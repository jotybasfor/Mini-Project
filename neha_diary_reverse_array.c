int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);
    int is_palindrome = 1;

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome == 1)
        printf("Perfect Secret Word\n");
    else
        printf("Not a Secret Word\n");

    return 0;
}
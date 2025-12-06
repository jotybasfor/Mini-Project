#include <stdio.h>
#include <string.h>

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    if (strcmp(word, strrev(word)) == 0)
        printf("Perfect Secret Word\n");
    else
        printf("Not a Secret Word\n");

    return 0;
}
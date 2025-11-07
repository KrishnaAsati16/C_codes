#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200], words[50][50];
    int count[50] = {0};
    int i = 0, j = 0, k, n = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);


    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) || str[i] == '\'') {
            words[n][j++] = tolower(str[i]);
        } else if (j > 0) {
            words[n][j] = '\0';
            n++;
            j = 0;
        }
    }
    if (j > 0) {
        words[n][j] = '\0';
        n++;
    }


    for (i = 0; i < n; i++) {
        if (count[i] == 0) {
            count[i] = 1;
            for (k = i + 1; k < n; k++) {
                if (strcmp(words[i], words[k]) == 0) {
                    count[i]++;
                    count[k] = -1;
                }
            }
        }
    }

    
    printf("\nWord frequencies:\n");
    for (i = 0; i < n; i++) {
        if (count[i] > 0) {
            printf("%s = %d\n", words[i], count[i]);
        }
    }

    return 0;
}

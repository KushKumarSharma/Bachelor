#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Print increasing pattern
    for(i = 1; i <= len; i++) {
        for(j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    // Print decreasing pattern (excluding full string)
    for(i = len - 1; i >= 1; i--) {
        for(j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
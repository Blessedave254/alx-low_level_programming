#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isAllDigits(const char *str);

int main(int argc, char *argv[]) {
    int i;

    int sum;

    if (argc < 2) {
        printf("0\n");
        return 0;
    }

    sum = 0;

    for (i = 1; i < argc; i++) {
        if (isAllDigits(argv[i])) {
            sum += atoi(argv[i]);
        } else {
            printf("Error\n");
            return 1;
        }
    }

    printf("%d\n", sum);

    return 0;
}

int isAllDigits(const char *str) {
    while (*str != '\0') {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}


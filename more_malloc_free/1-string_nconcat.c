#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenating two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 *
 */


char *string_nconcat(char *s1, char *s2, unsigned int n) {
    unsigned int length1, length2, i;
    char *concatStr;

    length1 = s1 ? strlen(s1) : 0;
    length2 = s2 ? strlen(s2) : 0;

    if (n > length2) {
        n = length2;
    }

    concatStr = (char *)malloc(length1 + n + 1);
    if (concatStr == NULL) {
        return NULL;
    }

    for (i = 0; i < length1; i++) {
        concatStr[i] = s1[i];
    }

    for (i = 0; i < n; i++) {
        concatStr[length1 + i] = s2[i];
    }

    concatStr[length1 + n] = '\0';

    return concatStr;
}


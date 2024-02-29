#include "main.h"

/**
 * _strcat - concatenating two strings
 * @dest: 
 * @src: appending this function
 *
 * Return: Un puntero a la cadena resultante dest.
 */


char *_strcat(char *dest, char *src) {
    char *ptr = dest;

      while (*ptr != '\0') {
        ptr++;
    }

        while (*src != '\0') {
        *ptr++ = *src++;
    }

        *ptr = '\0';

    return dest;
}


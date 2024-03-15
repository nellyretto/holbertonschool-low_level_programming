#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...) {
    va_list args;
    int i = 0, j;
    char *s, c;
    double f;

    va_start(args, format);
    while (format && format[i]) {
        j = 0;
        switch (format[i++]) {
            case 'c':
                c = (char) va_arg(args, int);
                printf("%c", c);
                j = 1;
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                j = 1;
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                j = 1;
                break;
            case 's':
                s = va_arg(args, char *);
                if (!s)
                    s = "(nil)";
                printf("%s", s);
                j = 1;
                break;
        }
        if (format[i] && j)
            printf(", ");
    }
    va_end(args);
    printf("\n");
}


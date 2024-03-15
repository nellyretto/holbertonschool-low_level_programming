#include <stdio.h>
#include <stdarg.h>
#include “variadic_functions.h”

/**
 * print_all - printing anything
 * 
 *
 *
 *
 */

void print_all(const char * const format, ...)

{
va_list args;
va_start(args, format);
const char* p = format;
char c;
int i;
float f;
char* s;

    while (*p) {
        switch (*p++) {
            case 'c':
                c = (char) va_arg(args, int); 
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                f = (float) va_arg(args, double); 
                printf("%f", f);
                break;
            case 's':
                s = va_arg(args, char*);
                if (s)
                    printf("%s", s);
                else
                    printf("(nil)");
                break;
        }
        if (*p) printf(", ");
    }
    va_end(args);
    printf("\n");
}

int main() {
    print_all("cifs", 'H', 42, 3.14, "Hello");
    print_all("cis", 'A', "World", 100);
    print_all("sf", "Pi is approximately", 3.14159);
    return 0;
}


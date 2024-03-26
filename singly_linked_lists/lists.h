#ifndef LISTS_H
#define LISTS_H

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;


int putchar (int character);
size_t print_list(const list_t *h);

#endif
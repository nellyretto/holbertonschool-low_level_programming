#include <stdio.h>
#include "main.h"

/**
 * main - printing numbers of arguments
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

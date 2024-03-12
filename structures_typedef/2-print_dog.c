#include <stdio.h>
#include "dog.h"

/**
 * print_dog - printing a structured dog
 *
 * Return: Always Success 0
 *
 */

void print_dog(struct dog *d)

{
	 struct dog my_dog;

	 my_dog.name = "Fifi";
	 my_dog.age = 2.5;
	 my_dog.owner = "Nelly";
	 print_dog(&my_dog);
	 return (0);
}

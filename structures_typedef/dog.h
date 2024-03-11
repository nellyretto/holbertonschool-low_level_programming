#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defining new structure
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - dog structure typedef
 *
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

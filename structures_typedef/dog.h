#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defining new structure
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 * dog_t - Typedef for structure dog_t
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

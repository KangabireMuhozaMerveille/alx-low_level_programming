#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - gives the name and age of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: who owns the dog
 *
 * Description: This struct gives info about a dog like age, name and owner.
 * the age is a floating-pointer number
 * while age and owner are pointers to strings
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

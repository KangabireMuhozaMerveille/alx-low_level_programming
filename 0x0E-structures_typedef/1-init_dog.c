#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * init_dog - initializes a variable of type struct
 * @name: a char that shows the name
 * @age: a floating-number tht contains age
 * @owner: a char that contains the name of the owner
 * @d: the pointer to the variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
#endif

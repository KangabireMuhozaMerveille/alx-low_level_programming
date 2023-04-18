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
#endif

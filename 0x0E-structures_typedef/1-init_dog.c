#include <stdio.h>
#include "dog.h"

/**
 *init_dog - function to initialize a struct of name dog
 *@d:pointer to the struct definition
 *@name:name of dog
 *@age:dog's age
 *@owner: dog owner
 *Return: Return nothing
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

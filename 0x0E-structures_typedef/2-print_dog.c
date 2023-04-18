#include "dog.h"
#include <stdio.h>

/**
 *print_dog - print the dog struct
 *@d: the pointer to the struct
 *
 *Return: Return nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Name: (nil)");
	}
}

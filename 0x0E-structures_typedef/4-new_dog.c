#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 *new_dog - creates a new dog
 *@name:name of the dog
 *@age:age of the dog
 *@owner: dog owner
 *Return: dog-t always.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	new_dog->name = malloc(sizeof(char) * strlen(name) + 1);
	new_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL || new_dog == NULL)
	{
		free(new_dog);
		free(new_dog->owner);
		free(new_dog->name);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
return (new_dog);
}

#ifndef DOG_H
#define DOG_H

/**
 *struct dog - new type
 *@name: name of dog
 *@age: dog's age
 *@owner: dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

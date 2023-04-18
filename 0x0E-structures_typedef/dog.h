#ifndef DOG_H
#define DOG_H

/**
  *struct struct dog - new type
  *@name: name of dog
  *@age: dog's age
  *@owner: dog owner
  */
 struct dog
 {
         char *name;
         float age;
         char *owner;
 };
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
#include "dog.h"

/**
 * init_dog - a function that initializes the dog
 * @d: object of the dog
 * @name: name of the dog
 * @age of the dog
 * @owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}

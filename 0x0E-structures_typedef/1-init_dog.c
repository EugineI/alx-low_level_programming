#include "dog.h"
#include<stdlib.h>
/**
 * init_dog - initialisation of the dog structure
 * @d: the dog structure
 * struct dog -structure for a dog
 * @name: name of the dog
 * @age: the dogs age
 * @owner: dogs owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

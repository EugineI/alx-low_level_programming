#include "dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_dog - prints structure dog
 * @d: dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: nil");
	}
	printf("Name: %s\n", d->name);
	if (d->age < 0 || d->age == 0)
	{
		printf("Age: nil\n");
	}
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: nil\n");
	}
	printf("Owner: %s\n", d->owner);

}

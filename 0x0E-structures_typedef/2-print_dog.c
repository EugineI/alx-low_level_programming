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
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: nil\n");
	}
	else
		printf("Name: %s\n", d->name);
	if (d->owner == NULL)
	{
		printf("Owner: nil\n");
	}
	else
			printf("Owner: %s\n", d->owner);
	if (d->age < 0 || d->age == 0)
	{
		printf("Age: nil\n");
	}
	else
		printf("Age: %.6f\n", d->age);
}

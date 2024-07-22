#ifndef DOG_H
#define DOG_H
/**
 *struct dog - structure for a dog
 * @owner: owner nam
 * @name: dog name
 * @age: age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

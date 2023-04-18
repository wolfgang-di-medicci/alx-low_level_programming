#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog's name...
 * @name: input 1
 * @age: input 2
 * @owner: input 3
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

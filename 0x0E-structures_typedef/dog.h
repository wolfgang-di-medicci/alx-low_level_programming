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

/**
 * dog_t - typedef for struct dog for task 3
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

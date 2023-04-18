#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory given for struct dog
 * @d: pointer for struct
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

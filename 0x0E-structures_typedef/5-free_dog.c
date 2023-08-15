#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This function frees dogs
 * @d: The pointer to an instance of struct dog
 */

void free_dog(dog_t *d)
{
	/* check if pointer is null */
	if (d != NULL)
	{
		/* free all used pionters*/
		free(d->name);
		free(d->owner);
		free(d);
	}
}

#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free the memory of a struct dog
 * @d: pointer to the struct dog to free
 *
 * Description: Frees the name and owner strings allocated for the struct
 *              and then frees the struct itself. If d is NULL the function
 *              does nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->owner != NULL)
		free(d->owner);
	if (d->name != NULL)
		free(d->name);
	free(d);
}






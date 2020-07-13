#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - who let them out?
 * @d: the dog to be freed
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free((*d).name);
	free((*d).owner);
	free(d);
}

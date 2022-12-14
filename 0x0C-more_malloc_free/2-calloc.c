#include <stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: The amount of member in the array
* @size: The size of each member
*
* Return: pointer to the new array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_ptr;
	char *asign;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_ptr = malloc(nmemb * size);

	if (!mem_ptr)
		return (NULL);

	asign = mem_ptr;

	for (i = 0; i < (nmemb * size); i++)
		asign[i] = 0;

	return (mem_ptr);
}

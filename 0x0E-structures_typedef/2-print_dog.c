#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: The varible to be printed
*
* Return: Nothing
*/

void print_dog(struct dog *d)
{

	if (d)
	{
		(*d).name ? printf("Name: %s\n", (*d).name) : printf("Name: (nil)\n");
		(*d).age ?  printf("Age: %f\n", (*d).age) : printf("Age: (nil)\n");
		(*d).owner ? printf("Owner: %s\n", (*d).owner) : printf("Owner: (nil)\n");
	}
}
#include "main.h"

/**
* _islower - checks for lower case alphabetic character
* @c: character to be passed in to _islower
*
* Return: returns 1 if success and 0 otherwise
*/

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

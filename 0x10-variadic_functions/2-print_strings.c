#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
* print_strings - print all the string passed to it as argument
* @separator: The character ot seperate each print_numbers
* @n: The amount of argument to be passed in
*
* Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va_ptr;

	va_start(va_ptr, n);

	for (i = 0; i < n; i++)
	{
		char *arg = va_arg(va_ptr, void*);

		if (arg == NULL)
			printf("(nil)");
		else
		{
			int i;

			for (i = 0; i < arg[i]; i++)
				printf("%c", arg[i]);
		}

		if (i != n - 1 && separator != NULL)
			printf("%c ", *separator);
	}

	printf("\n");
}

#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: Argument count
* @argv: Argument array
*
* Return: if succeful 0 else 1
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}

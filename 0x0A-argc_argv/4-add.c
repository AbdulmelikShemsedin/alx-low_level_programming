#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - My main func goesd here
 * @argc: args
 * @argv: arg vector
 * Return: 0 if succeed
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int a = 0, b = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (a = 0; a < strlen(e); a++)
			{
				if (e[a] < '0' || e[a] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			b += atoi(e);
		}
		printf("%d\n", b);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

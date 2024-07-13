#include <stdio.h>

/**
 * main - My main func goes here
 * @argc: arguments
 * @argv: arg vector
 * Return: 0 if succeed
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

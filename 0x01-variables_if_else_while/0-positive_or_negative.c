#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - My main function goes here
*
* Return: (0) if succeed
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
		return (0);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
		return (0);
	}
	else
	{
		printf("%d is positive\n", n);
		return (0);
	}
	return (0);
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums nos
 * @n: no of numbers to add
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list no;
	unsigned int i, sum = 0;

if (n == 0)
return (0);

va_start(no, n);
for (i = 0; i < n; i++)
{
sum += va_arg(no, int);
}
va_end(no);
return (sum);
}

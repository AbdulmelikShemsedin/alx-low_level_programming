#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed bet/n nos
 * @n: no of ints passing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list no;
unsigned int i;

if (separator == NULL)
return;

va_start(no, n);
for (i = 0; i < n - 1; i++)
{
printf("%d%s", va_arg(no, int), separator);
}
printf("%d\n", va_arg(no, int));
va_end(no);
}

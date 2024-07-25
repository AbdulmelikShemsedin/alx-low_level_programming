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

va_start(no, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(no, int));
if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(no);
}

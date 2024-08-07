#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: no of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list no;
unsigned int i;
char *str;

va_start(no, n);
for (i = 0; i < n; i++)
{
str = va_arg(no, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(no);
}

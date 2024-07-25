#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of args
 */
void print_all(const char * const format, ...)
{
	va_list no;
	int i = 0;
	char *str, *sep = "";

	va_start(no, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(no, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(no, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(no, double));
					break;
				case 's':
					str = va_arg(no, char *);

					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(no);
}

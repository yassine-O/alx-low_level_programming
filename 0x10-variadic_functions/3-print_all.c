#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Description
 * @format: pointer
 * Description: variadic functions
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *str, *sep = "";
	va_list ap;
	int i = 0;

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				sep = ", ";
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				sep = ", ";
				break;
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}

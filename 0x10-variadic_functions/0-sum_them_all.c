#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameter
 * code by ArchibaldTK
 * @n: variable
 *
 * Return: sum of parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	int result = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		result += va_arg(ap, int);

	va_end(ap);
	return (result);
}

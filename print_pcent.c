#include "main.h"

/**
  * print_percenr - prints percentage
  * @format: the string to print
  * Return:formatted character
  */
int _printf(const char *format, ...)
{
	int i, disp;

	if (format[i + 1] == '%')
	{
		i++;
		_putchar('%');
		disp++;
	}
	return (disp);
}

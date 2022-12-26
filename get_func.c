#include "main.h"

char *(*get_func)(va_list args)
{
	int i = 0;

	spec keys[] = {
		{'c', format_c},
		{'s', format_s},
		{'d', format_d},
		{'i', format_d},
		{'R', rot13},
		{'r', _reverse},
		{'b', itob},
		{'o', octal},
		{'\0', NULL}
	};
}


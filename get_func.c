#include "main.h"
/**
 *get_func- finds needed fucntion
 *@i: specifier
 *Return: needed function
 */
char *(*get_func(char i))(va_list)
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
	while (keys[k].id != '\0')
	{
		if (keys[k].id == i)
			return (keys[k].func);
		k++;
	}
	return (NULL);
}



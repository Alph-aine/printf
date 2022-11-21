#include "main.h"
/**
 *format_s- function called when %s is met
 *@args: the va_list argumument
 *Return: string
 */
char *format_s(va_list args)
{
	int len;
	char *dest;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		return (NULL);
	len = _strlen(s);
	dest = malloc(sizeof(char) * len + 1);/* plus 1 for the null terminator*/
	if (dest == NULL)
		return (NULL);
	return (_strcpy(dest, s));
}

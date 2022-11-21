#include "main.h"

char *print_char(va_list args)
{
	char *s;
	char c;

	c = va_arg(args, int);
	if (c == 0)
		c = '\0';
	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = '\0';
	return (s);
}

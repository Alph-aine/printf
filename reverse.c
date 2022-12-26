#include "main.h"
/**
 *_reverse- reverses a string
 * @args: the va_list variable
 *
 *Return: the revertd string
 */
char *_reverse(va_list args)
{
	char *rev;
	char *str;
	int len = 0, i = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	rev = malloc(sizeof(char) * len + 1);
	if (rev == NULL)
		return (NULL);

	len = len - 1; /* strings are counted from 0*/
	while (len >= 0)
	{
		*(rev + i) = *(str + len);
		i++;
		len--;
	}
	*(rev + i) = '\0';
	return (rev);
}

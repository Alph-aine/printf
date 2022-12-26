#include "main.h"
/**
 *octal- converts decimals to octals
 *@args: the va_list variable
 *Return: the octal value of decimal
 */

char *octal(va_list args)
{
	int k, j;
	int i = 0, eights = 1;
	char *s;

	k  = va_arg(args, int);
	if (k == NULL)
		return (NULL);

	/* malloc up to maximum int in octal */
	s = malloc(sizeof(char) * 12);
	if (s == NULL)
		return (NULL);

	/* if k < 0; j = -k, else j = k */
	j = k < 0 ? -k : k;

	if (k < 0)
	{
		s[0] = 1 + '0';
		i++;
		k *= -1;
	}

	/* find the biggest power of 8 the number is divisible by */
	while (k > 1)
	{
		k /= 8;
		eights *= 8;
	}

	/* now divide down and store octal number */
	while (eights > 0)
	{
		s[i++] = (j / eights + '0');
		j %= eights;
		eights /= 8;
	}
	s[i] = '\0';

	return (s);
}

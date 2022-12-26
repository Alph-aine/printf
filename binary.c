#include "main.h"
/**
 *itob- converts integer to binary
 *@args: the va_list variable
 *Return: binary value of integer
 */

char *itob(va_list args)
{
	char *s;
	int k, j;
	int i = 0, twos = 1;

	/*read the ints from va_list*/
	k = va_arg(args, int);
	if (k == NULL)
		return (NULL);

	/* malloc the maximum size of binary */
	s = malloc(sizeof(char) * 33);
	if (s == NULL)
		return (NULL);
	j = k < 0 ? -k : k;

	if (k < 0)
	{
		s[0] = 1 + '0';
		k *= -1;
		i++;
	}

	/* find the  maximum power of 2 the number can be divided by */
	while (k > 1)
	{
		k /= 2;
		twos *= 2;
	}

	/* divide and store binary number */
	while (twos > 0)
	{
		s[i++] = (j / twos + '0');
		i %= twos;
		twos /= 2;
	}
	s[i] = '\0';

	return (s);

}

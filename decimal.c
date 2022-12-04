#include "main.h"
/**
 *reverse_itos- reverse the result of itos
 *@str: the string from function itos
 *@length: the length of the string
 *Return: reverted string
 */
char *reverse_itos(char *str, int length)
{
	int start = 0, end = length - 1;
	char temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	str[length] = '\0';
	return (str);
}

/**
 *itos- converts an integer to string
 *@n: the integer
 *@length: the length of the integer
 *Return: the string
 */

char *itos(int n, int length)
{
	char *str;
	int i = 0;
	int digit, sign = 1;

	/* allocates memory for the string */
	str = malloc(sizeof(char) * length + 2);
	if (str == NULL) /* prevents memory leakages */
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}

	if (n < 0)
	{
		sign = -1;
		n = -n; /* sets negative to positive */
	}
	while (n > 0)
	{
		digit = n % 10; /* determines the last digit of n */
		str[i++] = digit + '0';
		n /= 10;
	}
	if (sign == -1)
		str[i++] = '-'; /* adds - if n is negative */
	str[i] = '\0';
	str = reverse_itos(str, length); /*reverses str to order */
	return (str);
}

/**
 *format_d- gets length to put in itos
 *@args: the va_list variable
 *Return: integer as a string
 */

char *format_d(va_list args)
{
	int length, n, temp;

	n = va_args(args,  int);
	temp = n;
	length = 0;
	if (n == 0)
	{
		length = 1;
		return (itos(n, length));
	}
	while (temp != 0)
	{
		length += 1;
		temp /= 10;
	}
	return (itos(n, length));

}



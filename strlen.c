#include "main.h"
/**
 * _strlen- function to get the length of a string
 *@s: the string
 *Return: an int
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}

#include "main.h"
/**
  *_strcpy- copies the content of a string to another
  *@dest: the destination
  *@src: the source
  *Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;


	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i]; /* to inlcude the null terminator*/

	return (dest);
}

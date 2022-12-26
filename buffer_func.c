#include "main.h"
/**
 *create_buffer- creates buffer
 *Return: pointer to buffer created
 */
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/**
 *write_buffer- writes to the stdout
 *@buffer: the buffer
 *@len: length of buffer
 *@args: va_list args
 *Return: void
 */

void write_buffer(char *buffer, int len, va_list args)
{
	char *buff;

	buff = realloc(buffer, len);
	write(1, buff, len);
	free(buff);
	va_end(args);
}

/**
 *check_buffer- checks for buffer overflow
 *@buffer: the buffer
 *@len: buffer len
 *Return: length
 */

int check_buffer(char *buffer, int len)
{
	if (len > 1020)
	{
		write(1, buffer, len);
		len = 0;
	}
	return (len);
}

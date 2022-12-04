#include <unistd.h>
#include "main.h"

/**
  * _putchar - prints characters to standard output
  * @c: the character to print
  * Return: 1 on success, -1 on failure
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

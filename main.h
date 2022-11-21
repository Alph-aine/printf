#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>


int _printf(const char *format, ...);
char *format_c(va_list args);
int _strlen(char *s);






/**
  *struct ft- a struct for format specifers and the functions it calls
  *@fs: the format specifier e.g(c - char ..)
  *@func: the function to be called
  */
typedef struct ft
{
	char *fs;
	void (*func)(va_list);
} specifier;

#endif

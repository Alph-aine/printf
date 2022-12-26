#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>


int _printf(const char *format, ...);
char *format_c(va_list args);
int _strlen(char *s);
char *format_s(va_list args);
char *itos(int n, int length);
char *reverse_itos(char *str, int length);
char *format_d(va_list args);
char *_strcpy(char *dest, char *src);
char *_reverse(va_list args);
char *rot13(va_list args);
char *octal(va_list args);
char *itob(va_list args);

/**
  *struct ft- a struct for format specifers and the functions it calls
  *@fs: the format specifier e.g(c - char ..)
  *@func: the function to be called
  */
typedef struct ft
{
	char *id;
	void (*func)(va_list);
} spec;

#endif

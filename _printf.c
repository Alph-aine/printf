#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, k, disp = 0;
	char *str = NULL;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			if (foarmat[i] == 'c')
			{
				_putchar(va_arg(ap, int));
				disp++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(ap, char *);
				k = 0;
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					disp++;
					i++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				disp++;
			}
		}
		i++;
	}
	va_end(ap);
	return (disp);
}

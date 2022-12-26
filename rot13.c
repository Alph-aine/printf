#include "main.h"
/**
 *rot13- encryptes string with rot13
 *@args: the va_list variable
 *Return: encrypted string
 */

char *rot13(va_list args)
{
	char *str;
	char *nstr;
	int i = 0;

	/*read strings from va_list */
	str = va_arg(args, char *);
	if (str == NULL)
		return (NULL);

	/* malloc new variable to hold encrypted form */
	nstr = malloc(sizeof(char) * (_strlen(str) + 1));
	if (nstr == NULL)
		return (NULL);

	/*loop through string and assign rot13 char to nstr */
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i]
					<= 'M'))
			nstr[i] = str[i] + 13;
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' &&
					str[i] <= 'Z'))
			nstr[i] = str[i] - 13;
		else
			nstr[i] = str[i];
		i++;
	}

	nstr[i] = '\0';
	return (nstr);
}

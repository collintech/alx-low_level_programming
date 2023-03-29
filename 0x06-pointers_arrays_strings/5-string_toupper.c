#include "main.h"

/**
 * string_toupper - The function name
 * while - loop function
 * str - The target string variable
 * 32 - ASCII Code for uppercase
 */
char *string_toupper(char *str)
{
	int i = 0;
	while (str[i] != '\0') {
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	i++;
	}
	return str;
}

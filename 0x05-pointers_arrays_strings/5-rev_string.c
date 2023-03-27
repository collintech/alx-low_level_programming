#include <stdio.h>
#include <string.h>
/**
 * rev_string - the function name
 * strlen  - it gets the length of a string from string.h library
 * len - variable
 * s - String parameter
 */

void rev_string(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

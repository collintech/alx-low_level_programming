#include <string.h>
/**
 * *rot13 - takes a null terminated string as input and returns
 * a pointer to the same sreing after encoding it using ROT13 Cipher.
 * return - returns str.
 */
char *rot13(char *str)
{
	char *p = str;
	while (*p)
	{
		char c = *p;
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
	{
		*p = c + 13;
	}
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
	{
		*p = c - 13;
	}
	p++;
	}
	return str;
}

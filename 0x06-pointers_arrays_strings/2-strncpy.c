#include "main.h"

/**
 * dest - The destination string where the copied string will be stored
 * n - The maximum number of character to be copied
 * src - the source file where the copy is executed
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}

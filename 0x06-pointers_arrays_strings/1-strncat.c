#include "main.h"
#include <string.h>

/**
 * *_strncat - The name of the function
 * dest - pointer to the destination string that stores the resturned string
 * src - a pointer to the source string
 * n - an integer that specifies the number of bytes from the source string
 */

char *_strncat(char* dest, char* src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';
	return dest;
}

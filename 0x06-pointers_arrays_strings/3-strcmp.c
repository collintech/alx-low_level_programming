#include "main.h"

/**
 * _strcmp - The name of the function
 * while - iterating function
 * return - unsigned character 
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

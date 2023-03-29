#include "main.h"
/**
 * _strcat - The function name
 * ptr = memory or variable pointer
 * while - iteration function
 * return - returns dest at termination
 */

char* _strcat(char* dest, char* src)
{
	char* ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	}
	*ptr = '\0';
	return dest;
}

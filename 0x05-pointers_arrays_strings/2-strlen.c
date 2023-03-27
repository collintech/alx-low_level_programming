/**
 * _strlen - The name of the function
 * s - string specifier
 * return len - returns the len variable
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

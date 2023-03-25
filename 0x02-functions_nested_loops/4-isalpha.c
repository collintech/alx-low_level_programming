#include "main.h"
/**
 * _isalpha - shows 1 if input is a 
 * letter. Another cases, shows 0
 * Returns 1 for the letter, 0 for the rest.
 */
int _isalpha(int c)
{	
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		return (1);
	} else {
		return (0);
	}
	_putchar('\n');
}

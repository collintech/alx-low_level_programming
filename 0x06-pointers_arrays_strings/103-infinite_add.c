#include "main.h"
#include <string.h>
/**
 * *infinite_add - function name
 * size_r - specifies the size of the buffer
 * n1 - parameter
 * n2 - parameter
 * r - parameter
 * return - returns r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i, j, k;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
	{
		return 0;
	}
	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k] = sum % 10 + '0';
	}

	/**
	*  Reverse the order of characters in the string
	*/
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}
	r[k] = '\0';

	return r;
}

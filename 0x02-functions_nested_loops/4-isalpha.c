#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int _isalpha(int c);

int main()
{
	char ch = '7';
	int result;

	result = _isalpha(ch);
	if (result == 1) {
		printf("The character %c is an alphabetic letter.\n", ch);
	} else {
		printf("The character %c is not an alphabet letter.\n", ch);
	}

	return 0;
}

int _isalpha(int c) {
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		return 1;
	} else {
		return 0;
	}
}

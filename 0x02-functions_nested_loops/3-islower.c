#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0;
 */
int_islower(int c);

int main()
{
	char ch = 'A';
	int result;

	result = is_lower(ch);
	if (result == 1) {
		printf("The character %c is lowercase.\n", ch);
	} else {
		printf("The character %c is not lowercase.\n", ch);
	}

	return 0;
}

int _islower(int c) {
	if (c >= 'a' && c <= 'z') {
		return 1;
	} else {
		return 0;
	}
}

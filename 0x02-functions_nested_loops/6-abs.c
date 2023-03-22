#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * abs - This returns the absolute value of an argument
 * num - This is a placeholder for the subject matter.
 * Return: Always 0
 */
int _abs(int num);

int main(void)
{
	int x = -5;
	int y = 10;

	printf("The absolute value of %d is %d\n", x, _abs(x));
	printf("The absolute value of %d is %d\n", y, _abs(y));
	return (0);
}

int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}

#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int add(int a, int b) {
	int result = a + b;
	return result;
}

int main()
{
	int a = 3;
	int b = 4;
	int sum = add(a, b);
	printf("The sum of %d and %d is %d.\n", a, b, sum);
	return 0;
}

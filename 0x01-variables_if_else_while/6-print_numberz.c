#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{

	int i; 

	for (i = 0; i < 10; i++)

	{

	    putchar(i % 10 + '0');

	}

	putchar('\n');

	return (0);

}


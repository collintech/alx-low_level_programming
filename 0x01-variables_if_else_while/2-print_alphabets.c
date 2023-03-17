#include <stdio.h>

/**
 * main - prints the alphabet in the lowercase using putchar
 *
 * Description: This program prints the lowercase alphabet using only the putchar function. It does this by iterating through each lowercase letter from `a` to `z` using a for loop and using putchar to print each character to the console. The program prints a newline character after printing all the letters to ensure that the output is on a separate line.
 * Return: Always 0 (Success)
 */

int main(void)

{

	char letter = 'a';

	while (letter <= 'z')
	{
	    
	    putchar(letter);

	    letter++;

	}
	
	putchar('\n');

	return(0);

}

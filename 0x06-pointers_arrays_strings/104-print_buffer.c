#include <stdio.h>
#include "main.h"
/**
 * print_buffer - function name
 * size - size of the buffer pointed by b
 * b - buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;
  
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		/**
		*  Print address in hexadecimal
		*/
		printf("%08x ", i);
    
		/**
		*  Print hexadecimal content
		*/
		for (j = 0; j < 10; j += 2)
		{
			if (i+j < size)
			{
				printf("%02x%02x ", (unsigned char)b[i+j], (unsigned char)b[i+j+1]);
			}
			else
			{
				printf("   ");
			}
		}
	}
    
	/**
	*  Print ASCII content
 	*/
	for (j = 0; j < 10; j++)
	{
		if (i+j < size)
		{
			char c = b[i+j];
			printf("%c", (c >= ' ' && c <= '~') ? c : '.');
		}
	}
	printf("\n");
}

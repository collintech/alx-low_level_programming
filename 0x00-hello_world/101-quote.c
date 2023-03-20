#include <unistd.h>
/**
 * main - Entry point
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, 59);
	/* Return - the closing point of the program */
	return (1);
}

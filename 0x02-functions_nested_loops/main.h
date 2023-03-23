<<<<<<< HEAD
#include <unistd.h>
/**
 * *_putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
=======
#ifndef MYHEADER_H
#define MYHEADER_H

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
>>>>>>> 2c81f665d658dad5beb8c5d28ab51b64fd75860e
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
<<<<<<< HEAD
=======

 /* MYHEADER_H */
#endif
>>>>>>> 2c81f665d658dad5beb8c5d28ab51b64fd75860e

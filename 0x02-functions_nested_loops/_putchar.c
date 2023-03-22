#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * the character to print
 * Return: success is 1
 * error is -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

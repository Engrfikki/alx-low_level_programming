#include <stdio.h>

/**
 * print all arguments it recieves
 * including the first one
 * only print one argument per line
 * ending with a new line
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for  (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

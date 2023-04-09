#include <stdio.h>

/**
 * main -  print all arguments it recieves
 * @argc: including the first one
 * @argv: only print one argument per line
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


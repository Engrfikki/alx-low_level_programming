#include <stdio.h>
#include <stdlib.h>

/**
 * adds positive numbers
 * number contains symbols that are not digits should print Error
 * all numbers can stored in an int
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			retutn (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}

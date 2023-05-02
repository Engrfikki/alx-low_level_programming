#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - reviewing the code for pupils at Holberton School.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h);
{
	int count = 0;

	while (h)

	{
		count++;
		h = h->next;
	}

	return (count);
}

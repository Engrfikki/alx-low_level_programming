#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a dot new node at beginning of a list_t list.
 * @head: pointer to the head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *dot;

	dot = malloc(sizeof(list_t));
	if (dot == NULL)
		return (NULL);
	dot->str = strdup(str);

	dot->len = _strlen(str);
	dot->next = *head;
	*head = dot;

	return (dot);
}

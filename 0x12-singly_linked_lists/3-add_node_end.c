#include "lists.h"

/**
 * _strlen - string size
 * @s: string
 * Return: size
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - adds node
 * @head: head
 * @str: string
 * Return: nbr
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	char *string;
	list_t *temp;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(str);
	new->str = string;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}

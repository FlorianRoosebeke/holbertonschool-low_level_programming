#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
	temp = temp->next;
	count++;
	}
	return (count);
}

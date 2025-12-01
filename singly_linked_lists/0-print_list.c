#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	struct list *h = NULL;

	h = (struct list *)malloc(sizeof(struct list));

	if (h == NULL)
		printf("[0] (nil)\n");
	else
		printf("%s", h->data);
}
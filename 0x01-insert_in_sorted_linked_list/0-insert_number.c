#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - Insert node into sorted linked list
 *
 * @head: head of sorted linked list
 * @number: number to insert into sorted linked list
 *
 * Return: Address of node node or NULL on failure
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node, *temp;

	if (!head)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	
    node->n = number;
	
    if (!*head)
	{
		*head = node;
		return (node);
	}
	
    temp = *head;
	
    if (number < temp->n)
	{
		node->next = temp;
		*head = node;
		return (node);
	}
	
    while (temp->next && number > temp->next->n)
		temp = temp->next;

	node->next = temp->next;
	temp->next = node;
	return (node);
}
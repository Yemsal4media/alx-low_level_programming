#include "lists.h"

/**
 * pop_listint - This funtion deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data (n)
*/
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	/*set head addr to temp*/
	temp = *head;
	/*to get addr of next node*/
	next = temp->next;
	/*to get element of first node*/
	first_node = temp->n;

	/*to free first node*/
	free(temp);

	/*to set head to second node*/
	*head = next;

	/*to return element of first node*/
	return (first_node);
}

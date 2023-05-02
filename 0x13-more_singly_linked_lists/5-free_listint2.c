#include "lists.h"

/**
 * free_listint2 -This is a function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		/*to set head address to current*/
		current = *head;

		/*to iterate through the whole list*/
		/*while setting the current node to temp*/
		while ((temp = current) != NULL)
		{
			/*to set next node to current*/
			current = current->next;
			/*free temp: current node*/
			free(temp);
		}

		*head = NULL;
	}
}

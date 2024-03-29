#include "monty.h"

/**
 * push - pushes the data to the stackfile
 * @new_node: the data and stack list
 * @l_number: line number
 * Return: void
 */
void push(stack_t **new_node, unsigned int l_number)
{
	stack_t *temp;
	(void) l_number;

	if (new_node == NULL || *new_node == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
	head = *new_node;
		return;
	}
	temp = head;
	head = *new_node;
	head->next = temp;
	temp->prev = head;
}

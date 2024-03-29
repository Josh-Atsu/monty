#include "monty.h"

/**
 * add_to_que - add node to queues
 * @stack: double pointer to the stack
 * @l_number: number line
 * Return: void
 */
void add_to_que(stack_t **new_node, unsigned int l_number)
{
	stack_t *temp;

	(void) l_number;
	if (new_node == NULL)
		exit(EXIT_FAILURE);
	temp = head;
	if (head != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = (*new_node);
		(*new_node)->prev = temp;
	}
	else
		head = (*new_node);
}

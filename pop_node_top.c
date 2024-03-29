#include "monty.h"

/**
 * pop_node - Adds a node to the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @l_number: Interger representing the line number of of the opcode.
 */

void pop_node(stack_t **stack, unsigned int l_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
		more_err_msg(7, l_number);
	(void) l_number;
	temp = *stack;
	if (head != NULL)
		head = head->next;
	free(temp);
}

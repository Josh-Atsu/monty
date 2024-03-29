#include "monty.h"


/**
 * pall - print all elements of the stack
 * @stack: pointer to a pointer to a stack
 * @l_number: line number
 * Return: void
 */
void pall(stack_t **stack, unsigned int l_number)
{
	stack_t *ptr;

	(void) l_number;
	if (stack == NULL)
		exit(EXIT_FAILURE);
	ptr = *stack;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}

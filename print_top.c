#include "monty.h"

/**
 * print_top - Prints the top node of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @l_number: Interger representing the line number of of the opcode.
 */
void print_top(stack_t **stack, unsigned int l_number)
{
	if (stack == NULL || *stack == NULL)
		more_err_msg(6, l_number);
	printf("%d\n", (*stack)->n);
}

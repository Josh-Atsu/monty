#include "monty.h"

/**
 * create_new_node - create new node
 * @n: data to add
 * Return: new_node
 */
stack_t *create_new_node(int n)
{
	stack_t *new_node;
	
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error: malloc failed.\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

stack_t *head;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);


/* function prototypes */
stack_t *create_new_node(int n);
void push(stack_t **new_node, unsigned int l_number);
void pall(stack_t **stack, unsigned int l_number);
void free_node(void);
void add_to_que(stack_t **new_node, unsigned int l_number);
void pop_node(stack_t **stack, unsigned int l_number);
void nop_node(stack_t **head_s, unsigned int l_n);
void print_top(stack_t **stack, unsigned int l_number);


void div_nodes(stack_t **stack, unsigned int l_number);
void sub_nodes(stack_t **stack, unsigned int l_number);
void add_nodes(stack_t **stack, unsigned int l_number);
void swap_nodes(stack_t **stack, unsigned int l_number);
void mod_nodes(stack_t **stack, unsigned int l_number);
void mul_nodes(stack_t **stack, unsigned int l_number);
void print_char(stack_t **stack, unsigned int l_number);
void print_str(stack_t **stack, unsigned int l_number);
void rotl(stack_t **stack, unsigned int l_number);
void rotr(stack_t **stack, unsigned int l_number);



void call_fun(op_func func, char *op, char *val, int ln, int format);
void find_func(char *opcode, char *value, int ln, int format);
int parse_line(char *buffer, int line_number, int format);
void read_file(FILE *fd);
void open_file(char *file_name);
int len_chars(FILE *);


void err_msg(int error_code, ...);
void more_err_msg(int error_code, ...);
void string_err_msg(int error_code, ...);



#endif /* monty.h */

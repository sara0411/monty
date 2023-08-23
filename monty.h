#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * struct global_s - variables -> args, file, line content
 * @arg: value
 * @line: input line content
 * @file: pointer to monty file
 *
 * Description: variables that carries values through the program
 */
typedef struct global_s
{
	char *arg;
	FILE *file;
	char *line;
} glob_t;

extern glob_t glob;

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

/**
 * struct instruction - code and its function
 * @code: the code
 * @f: function to handle the code
 *
 * Description: code and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction
{
	char *code;
	void (*f)(stack_t **stack, unsigned int cpt);
} instruction;

/* Function prototypes */
void execute_file(stack_t **stack);
void execute_opcode(char *code, stack_t **stack, unsigned int cpt);

void push_func(stack_t **stack, unsigned int cpt);
void pall(stack_t **stack, unsigned int cpt);
void pint(stack_t **stack, unsigned int cpt);
void pop(stack_t **stack, unsigned int cpt);
void swap(stack_t **stack, unsigned int cpt);
void add(stack_t **stack, unsigned int cpt);
void nop(stack_t **stack, unsigned int cpt);
void sub(stack_t **stack, unsigned int cpt);
void monty_div(stack_t **stack, unsigned int cpt);
void mul(stack_t **stack, unsigned int cpt);
void mod(stack_t **stack, unsigned int cpt);
void pchar(stack_t **stack, unsigned int cpt);
void pstr(stack_t **stack, unsigned int cpt);

/* Stack helper functions */
stack_t *add_node(stack_t **stack, const int n);
int is_number(char *str);
void free_stack(stack_t *stack);

#endif /* monty.h */

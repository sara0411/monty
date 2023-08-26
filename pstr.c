#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 *           followed by a new line
 * @stack: double pointer to the top of the stack.
 * @line_number: current line number of the opcode in the Monty file
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *copy = *stack;
	(void) line_number;

	while (copy && copy->n > 0 && copy->n <= 127)
	{
		printf("%c", copy->n);
		copy = copy->next;
	}
	printf("\n");
}

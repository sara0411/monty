#include "monty.h"

/**
 * pall - prints all values on the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *copy = *stack;

	while (copy != NULL)
	{
		printf("%d\n", copy->n);
		copy = copy->next;
		(void)line_number;
	}

}

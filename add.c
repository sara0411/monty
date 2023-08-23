#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @cpt: line counter of the code
 **/
void add(stack_t **stack, unsigned int cpt)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", cpt);
		free(global.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, cpt);
}

#include "monty.h"

/**
 * mod - computes the modulus of the second top element of the stack
 *          with the top element of the stack.
 * @stack: pointer to the top of the stack
 * @cpt: line counter of the code
 */
void mod(stack_t **stack, unsigned int cpt)
{
	int a, b;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", cpt);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	if (a == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cpt);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n = b % a;
	pop(stack, cpt);
}

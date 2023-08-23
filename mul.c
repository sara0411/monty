#include "monty.h"

/**
 * mul - multiplies the second top element of the stack with the top element
 * @stack: double pointer to the head of the stack
 * @cpt: current line number in the file
 */
void op_mul(stack_t **stack, unsigned int cpt)
{
	int result;
	stack_t *tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", cpt);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	result = tmp->next->n * tmp->n;
	tmp->next->n = result;
	*stack = tmp->next;
	free(tmp);
}

#include "monty.h"

/**
 * monty_div - divides the second top element of the stack by the top element
 * @stack: double pointer to the head of the stack
 * @cpt: current line number in the file
 */
void monty_div(stack_t **stack, unsigned int cpt)
{
	int result;
	stack_t *tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", cpt);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cpt);
		exit(EXIT_FAILURE);
	}
	result = tmp->next->n / tmp->n;
	tmp->next->n = result;
	*stack = tmp->next;
	free(tmp);
}

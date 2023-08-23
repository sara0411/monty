#include "monty.h"

/**
 * pall - prints all values on the stack
 * @stack: pointer to the top of the stack
 * @cpt: line counter of the code
 */
void pall(stack_t **stack, unsigned int cpt)
{
	stack_t *tmp = *stack;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		(void)cpt;
	}

}

#include "monty.h"

/**
 * pchar - prints the character at the top of the stack
 * @stack: pointer to the top of the stack
 * @cpt: current line number of the opcode in the Monty file
 */
void pchar(stack_t **stack, unsigned int cpt)
{
	int value;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", cpt);
		exit(EXIT_FAILURE);
	}

	value = (*stack)->n;
	if (value < 0 || value > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", cpt);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", value);
}

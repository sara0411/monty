#include "monty.h"

/**
 * pall_func - prints all values on the stack
 * @stack: pointer to the head of the stack
 * @cpt: line counter of the code
 */
void pall_func(stack_t **stack, unsigned int cpt)
{
    stack_t *current = *stack;
     (void)cpt;
     
    while (current != NULL)
    {
        printf("%d\n", current->n);  
        current = current->next;
    }
    
   
}

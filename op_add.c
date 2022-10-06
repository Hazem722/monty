#include "monty.h"

/**
 * add - Prints all the elements of the stack
 * @stack: The stack to print
 * @line_number: ...
 *
 * Return: Nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	unsigned int a = 0, b = 0, length = 0;

	length = count_stack(*stack);

	if (length < 2)
		handle_error(ERR_ADD_USG, NULL, line_number);

	a = temp->n;
	b = temp->next->n;
	temp->next->n = a + b;
	*stack = temp->next;
	free(temp);
}

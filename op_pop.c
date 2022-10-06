#include "monty.h"

/**
 * pop - ...
 * @stack: The stack to ...
 * @line_number: ...
 *
 * Return: Nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack, *temp = NULL;

	if (*stack == NULL)
		handle_error(ERR_POP_USG, NULL, line_number);

	temp = current;
	if (current->next)
	{
		current = current->next;
		current->prev = temp->prev;
		*stack = current;
	}
	else
	{
		*stack = NULL;
	}

	free(temp);
}

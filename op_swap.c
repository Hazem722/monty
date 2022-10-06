#include "monty.h"

/**
 * swap - ...
 * @stack: The stack to ...
 * @line_number: ...
 *
 * Return: Nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	unsigned int length = 0, temp = 0;

	if (*stack)
	{
		temp = (*stack)->n;
		length = count_stack(*stack);
		if (length < 2)
			handle_error(ERR_SWAP_USG, NULL, line_number, NULL);

		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
}

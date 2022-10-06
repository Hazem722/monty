#include "monty.h"

/**
  * rotr - ...
  * @stack: ...
  * @line_number: ...
  *
  * Return: ...
  */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = NULL, *last = NULL;
	unsigned int temp = 0;
	(void) line_number;

	if (*stack)
	{
		curr = *stack;
		last = *stack;

		while (last->next != NULL)
			last = last->next;

		temp = curr->n;
		(*stack)->n = last->n;
		last->n = temp;
		curr = curr->next;
	}
}

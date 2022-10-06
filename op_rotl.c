#include "monty.h"

/**
  * rotl - ...
  * @stack: ...
  * @line_number: ...
  *
  * Return: ...
  */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	unsigned int temp = 0;
	(void) line_number;

	while (curr->next != NULL)
	{
		temp = curr->n;
		curr->n = curr->next->n;
		curr->next->n = temp;
		curr = curr->next;
	}
}

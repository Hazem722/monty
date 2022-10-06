#include "monty.h"

/**
  * pstr - ...
  * @stack: ...
  * @line_number: ...
  *
  * Return: ...
  */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	(void) line_number;

	while (curr != NULL)
	{
		if (curr->n == 0)
			break;
		if (curr->n > 0 && curr->n <= 127)
			printf("%c", curr->n);
		curr = curr->next;
	}

	printf("\n");
}	

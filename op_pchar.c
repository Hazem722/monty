#include "monty.h"

/**
  * pchar - ..
  * @stack: ...
  * @line_number: ...
  *
  * Return: Nothing
  */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = NULL;

	if (*stack)
	{
		curr = *stack;

		while (curr != NULL)
		{
			if (curr->n >= 0 && curr->n <= 127)
				printf("%c\n", curr->n);
			else
				handle_error(ERR_PCH_USG, NULL, line_number, NULL);
			curr = curr->next;
		}

		return;
	}

	handle_error(ERR_PCH_EMP, NULL, line_number, NULL);
}

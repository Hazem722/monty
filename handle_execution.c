#include "monty.h"

/**
  * handle_execution - ...
  * @op_code: ...
  * @op_param: ...
  * @line: ...
  *
  * Return: Nothing
  */
int handle_execution(char *op_code, char *op_param, unsigned int line)
{
	int status_op = 0;
	void (*oprt)(stack_t **, unsigned int);

	oprt = pick_func(op_code);
	if (oprt)
	{
		if (strcmp(op_code, "push") == 0)
		{
			status_op = check_push_param(op_param);
			if (status_op == ERR_PUSH_USG)
				return (ERR_PUSH_USG);
			oprt(&head, atoi(op_param));
		}
		else
		{
			oprt(&head, line);
		}
		return (SUCSS_OP);
	}
	return (ERR_BAD_INST);
}

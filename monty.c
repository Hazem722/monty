#include "monty.h"

stack_t *head = NULL;

/**
  * main - The Monty entry point
  * @argn: The args number
  * @args: The args passed to the interpreter
  *
  * Return: ...
  */
int main(int argn, char *args[])
{
	FILE *fd = NULL;
	size_t line_len = 0;
	unsigned int line_num = 1;
	int readed = 0, op_status = 0;
	char *filename = NULL, *op_code = NULL, *op_param = NULL;
	char *buff = NULL;

	filename = args[1];
	check_args_num(argn);
	check_access_rights(filename);
	fd = fopen(filename, "r");
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((readed = getline(&buff, &line_len, fd)) != -1)
	{
		op_code = strtok(buff, "\t\n ");
		if (op_code)
		{
			op_param = strtok(NULL, "\t\n ");
			op_status = handle_execution(op_code, op_param, line_num);

			if (op_status >= 100)
			{
				fclose(fd);
				handle_error(op_status, op_code, line_num, buff);
			}
		}
		++line_num;
	}
	frees_stack();
	free(buff);
	fclose(fd);
	return (0);
}

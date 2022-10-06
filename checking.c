#include "monty.h"

/**
  * check_args_num - Checks the number of passed args
  * @argn: Number of args
  *
  * Return: Nothing
  */
void check_args_num(int argn)
{
	if (argn != MIN_ARGS)
		handle_error(ERR_ARG_USG, NULL, 0);
}

/**
  * check_access_rights - Checks if the file can be readed
  * @filename: The pathname of the file
  *
  * Return: Nothing
  */
void check_access_rights(char *filename)
{
	if (access(filename, R_OK) == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
}

/**
  * check_push_param - Checks if the file can be readed
  * @param: ...
  *
  * Return: Nothing
  */
int check_push_param(char *param)
{
	int diff = 0, conv = 0;

	if (param == NULL)
		return (ERR_PUSH_USG);

	diff = strcmp(param, "0");
	conv = atoi(param);

	if (diff != 0 && conv == 0)
		return (ERR_PUSH_USG);

	return (VALID_PARM);
}

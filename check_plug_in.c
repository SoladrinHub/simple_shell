#include "_shell.h"
/**
 * check_plug_in - check the built-in
 * @input: input user
 * @buff: buffer input
 * @head_path: PATH
 * @status: status exit
 * Return: flag
*/
ssize_t check_plug_in(char **input, char *buff,
list_path *head_path, ssize_t *status)
{
	ssize_t flag = 10;

	if (_strcmp(input[0], "exit") == 0)
	{
		flag = exit_plug_in(input, buff, head_path, status);
	}
	if (_strcmp(input[0], "env") == 0)
	{
		flag = display_env();
	}
	if (_strcmp(input[0], "help") == 0)
	{
		flag = help_plug_in(input);
	}
	if (_strcmp(input[0], "setenv") == 0)
		flag = setenv_plug_in(input, status);

	if (_strcmp(input[0], "unsetenv") == 0)
		flag = unsetenv_plug_in(input, status);

	if (_strcmp(input[0], "cd") == 0)
		flag = cd_built_in(input, status);

	return (flag);
}

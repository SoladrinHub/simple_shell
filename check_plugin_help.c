#include "_shell.h"
/**
 * help_plug_in - info of the built in
 * @input: argument being passed
 * Return: 0 if successful or 3 if fail
*/
ssize_t help_plug_in(char **input)
{
	if (input[1] != NULL)
	{
		if (_strcmp(input[1], "env") == 0)
		{
			help_env();
			return (0);
		}
		else if (_strcmp(input[1], "exit") == 0)
		{
			help_exit();
			return (0);
		}
		else if (_strcmp(input[1], "help") == 0)
		{
			help_help();
			return (0);
		}
		else if (_strcmp(input[1], "setenv") == 0)
		{
			help_setenv();
			return (0);
		}
		else if (_strcmp(input[1], "unsetenv") == 0)
		{
			help_unsetenv();
			return (0);
		}
		else if (_strcmp(input[1], "cd") == 0)
		{
			help_cd();
			return (0);
		}
		else
			return (3);
	}
	else
	{
		help();
		return (0);
	}
}

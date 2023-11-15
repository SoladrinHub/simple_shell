#include "_shell.h"
/**
 * cd_built_in - one
 * @input: Array of strings, input user
 * @status: status exit
 * Return: 0 always
 */
ssize_t cd_built_in(char **input, ssize_t *status)
{
	if (input[1] == NULL)
	{
		write(STDERR_FILENO, "usage: cd [DIRECTORY]", 22);
		*status = 2;
		return (0);
	}
	return (0);
}

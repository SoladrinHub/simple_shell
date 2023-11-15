#include "_shell.h"
/**
 * unsetenv_plug_in - Removes an environmental variable
 * @input: Array of strings, input user
 * @status: status exit.
 * Return: 0 always
 */
ssize_t unsetenv_plug_in(char **input, ssize_t *status)
{
	if (input[1] == NULL)
	{
		write(STDERR_FILENO, "usage: unsetenv VARIABLE VALUE", 30);
		*status = 2;
		return (0);
	}
	return (0);
}

#include "shell.h"

void read_input(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			shell_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			shell_print("Could not read input.\n");
			exit(EXIT_FAILURE);
		}
	}
	commamd[strcspn(command, "\n")] = '\0';
}

#include "_shell.h"

/**
 * main - main function
 * Return: always 0
*/
int main(void)
{
	char command[150];

	while (true)
	{
		prompt_displayer();
		exec_command(command);
		read_input(command, sizeof(command));
	}
	return (0);
}

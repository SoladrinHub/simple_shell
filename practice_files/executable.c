#include "_shell.h"

void exec_command(const char *command)
{
	pid_t min_pid = fork();

	if (min_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (min_pid == 0)
	{
		execlp(command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}

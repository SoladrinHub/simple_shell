#include "_shell.h"
/**
 * prompt_handler - print prompt again when signal-control-c
 * @signal: unused
*/
void prompt_handler(int signal __attribute__((unused)))
{
	write(STDOUT_FILENO, "\nsolseg$ ", 9);
}

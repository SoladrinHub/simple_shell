#include "_shell.h"
void shell_print(const char *info)
{
	write(STDOUT_FILENO, info, strlen(info));
}

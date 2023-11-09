#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

void shell_print(const char *info);
void prompt_displayer(void);
void exec_command(const char *command);
void read_input(char *command, size_t size);

#endif

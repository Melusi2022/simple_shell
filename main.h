#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

#define DELIM " \n"
extern char **environ;

char *read_line(void);
void print_prompt(void);
char **parse_str(char *str);
void exec_cmds(char **cmd, char **env);
char *find_path(char **cmd);

#endif

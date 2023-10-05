#include "main.h"

/**
 * main - execute the whole program
 * @argc: argument count
 * @argv: argument vector
 * @env: environment variable
 * Return: 0 on success
 */


int main(int argc, char **argv, char **env)
{
	char *str, **cmd;

	(void) argc;
	(void) argv;

	while (1)
	{
		print_prompt();
		str = read_line();
		cmd = parse_str(str);

		exec_cmds(cmd, env);

		free(str);
		free(cmd);
	}
	return (0);
}


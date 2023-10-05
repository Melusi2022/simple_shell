#include "main.h"

/**
 * exec_cmds - executes simple commands
 * @cmd: command to be executed
 * @env: environment variable
 */

void exec_cmds(char **cmd, char **env)
{
	char *path;
	int status;
	pid_t p = fork();

	if (p == 0)
	{
		path = find_path(cmd);

		if (execve(path, cmd, env) == -1)
		{
			perror("Error:");
			exit(EXIT_FAILURE);
		}
	}

	else if (p < 0)
	{
		perror("forking failed");
		exit(EXIT_FAILURE);
	}

	else
	{
		waitpid(p, &status, 0);
	}
}

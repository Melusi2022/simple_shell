#include "main.h"
/**
 * process_command - Process the command and execute corresponding actions.
 * @argv: Array of strings where argv[0] is the command.
 *
 * Return: 0 on success, 1 if the command was unsuccessful.
 */
int process_command(char **argv)
{
	int num_arg = num_args(argv);

	if (_strcmp(argv[0], "cd") == 0)
	{
		return (process_cd(argv, num_arg));

		if (_strcmp(argv[0], "env") == 0)
			return (process_env());

		if (_strcmp(argv[0], "setenv") == 0)
			return (process_setenv(argv, num_arg));

		if (_strcmp(argv[0], "unsetenv") == 0)
			return (process_unsetenv(argv, num_arg));
	}
/*
 *	if (alias_command(argv, num_arg))
 *	{
 *		return (0);
 *	}
 */
	return (1);
}
/**
 * process_cd - Process the 'cd' command.
 * @argv: Array of strings where argv[0] is the command.
 * @num_arg: Number of arguments in argv.
 *
 * Return: 0 on success, 1 if the command was unsuccessful.
 */
int process_cd(char **argv, int num_arg)
{
	if (num_arg >= 1)
	{
		return (cd(argv[1]));
	}
	return (1);
}
/**
 * process_env - Process the 'env' command.
 *
 * Return: 0 on success, 1 if the command was unsuccessful.
 */
int process_env(void)
{
	return (_env());
}
/**
 * process_setenv - Process the 'setenv' command.
 * @argv: Array of strings where argv[0] is the command.
 * @num_arg: Number of arguments in argv.
 *
 * Return: 0 on success, 1 if the command was unsuccessful.
 */
int process_setenv(char **argv, int num_arg)
{
	if (num_arg == 3)
	{
		return (_setenv(argv[1], argv[2]));
	}
	else
	{
		_print("Usage: setenv VARNAM VALUE\n");
		return (1);
	}
}
/**
 * process_unsetenv - Process the 'unsetenv' command.
 * @argv: Array of strings where argv[0] is the command.
 * @num_arg: Number of arguments in argv.
 *
 * Return: 0 on success, 1 if the command was unsuccessful.
 */
int process_unsetenv(char **argv, int num_arg)
{
	if (num_arg == 2)
	{
		return (_unsetenv(argv[1]));
	}
	else
	{
		_print("Usage: unsetenv VARNAME\n");
		return (1);
	}
}

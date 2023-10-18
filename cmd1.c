#include "main.h"

/**
 * _perrore - address exit error for string or negatives
 * @err: name of shell
 * @count: number of command
 * @c: name of command
 * @arg: argument of command
 */
void _perrore(char *err, int count, char *c, char *arg)
{
	_print(err);
	_print(": ");
	_pnumber(count);
	_print(": ");
	_print(c);
	_print(": Illegal number: ");
	_print(arg);
	_print("\n");
}

# 0x16. C - SIMPLE SHELL

# ABOUT PROJECT
The project is a team project. 
We are expected to develop our own shell similar to the linux shell using C 

Our shell should be able to:

* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* Display a prompt again each time a command has been executed.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors.
* Handle the “end of file” condition (Ctrl+D)
* Handle command lines with arguments
* Handle the PATH, fork must not be called if the command doesn’t exist
* Implement built-in functions, like exit, cd, env, setenv, unsetenv
* Handle the commands separator ;
* Handle the && and || shell logical operators
* Implement the alias builtin command
* Handle variables replacement
* take a file as a command line argument, Usage: simple_shell [filename]

# LIST OF ALLOWED FUNCTIONS AND SYSTEM CALLS

* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* getpid (man 2 getpid)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)

# COMPILATION

Your shell will be compiled this way:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

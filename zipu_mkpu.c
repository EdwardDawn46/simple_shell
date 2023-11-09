#include "myAlxShell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * zipu_mkpu - Execute a shell command in a child process.
 * @mkpu: The full path to the command to execute.
 */

void zipu_mkpu(const char *mkpu)
{
	pid_t pid;
	char *args[2];
	int status;

	args[0] = (char *)mkpu;
	args[1] = NULL;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(1);
	} else if (pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("execve");
			exit(1);
		}
	}
	else
	{
		wait(&status);
	}
}

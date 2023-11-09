#include "myAlxShell.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * guo_ihedere - Read a command from standard input.
 * @mkpu: Buffer to store the command.
 * @size: Size of the command buffer.
 * Return: A pointer to the dynamically allocated
 * buffer containing the user's input.
 */

char *guo_ihedere(char *mkpu, size_t size)
{
	if (fgets(mkpu, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			de("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			de("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	mkpu[strcspn(mkpu, "\n")] = '\0';
	return (mkpu);
}

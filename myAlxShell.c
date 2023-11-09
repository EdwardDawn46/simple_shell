#include <stdio.h>
#include <unistd.h>
#include "myAlxShell.h"

/**
 * main - Entry point for the simple shell program.
 *
 * This function repeatedly displays a prompt, reads user input,
 * and executes the user's command until terminated by the user.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	char mkpu[200];

	while (1)
	{
		gosi_mkpali();
		guo_ihedere(mkpu, sizeof(mkpu));
		zipu_mkpu(mkpu);
	}

	return (0);
}

#include <unistd.h>
#include <string.h>

/**
 * de - A simple utility function for writing
 * messages to the standard output (STDOUT).
 *
 * @message: The message to be written to STDOUT.
 */

void de(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}

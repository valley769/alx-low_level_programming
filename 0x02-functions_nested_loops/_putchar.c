#include <unistd.h>

/**
 * _putchar - write the character to c stout
 * @c: - the character to print
 * Return - on success 1
 * on error, -1 is returned and error is set appropraitely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

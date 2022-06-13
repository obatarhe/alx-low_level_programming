/**
 *UNIX is basically a simple operating system, 
 *but you have to be a genius to understand the simplicity
 */

#include <unistd.h>

/**
* This is the preferred style for multi-line
* comments in C source code.
* Please use it consistently.
*
* Description:  A column of asterisks on the left side,
* with beginning and ending almost-blank lines.
*/
 
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}

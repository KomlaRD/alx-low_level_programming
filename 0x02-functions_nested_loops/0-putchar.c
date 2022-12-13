/**
 * main- print out putchar
(* Description: function to print out putchar using a defined
header without standard libraries)
*
* Return: return 0
*/
#include "main.h"

int main(void)
{
	char value = "_putchar";

	for (value = 0; value < 8; value++)
	{
		_putchar(value[c]);
	}
	_putchar('\n');

	return (0);
}

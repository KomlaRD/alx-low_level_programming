/**
 * print_alphabet - print the letters of the alphabet
 *
(* Description: Use main.h to use prototype function
* to print all the letters of the English alphabet)
*
* Return: return 0
*/

#include "main.h"

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

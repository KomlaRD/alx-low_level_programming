/**
 * print_alphabet_x10- Print alphabets ten times
 (* Description: Print the letters of the English
* alphabet ten times using a for loop)
*
* Return: return void
*/

#include "main.h"

void print_alphabet_x10(void)
{
	int loop = 0;

	while (loop < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');

		loop++;
	}
}

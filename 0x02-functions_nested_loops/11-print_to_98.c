/**
 * print_to_98- Function to print to 98
(* Description: Print from a given number n
* to number 98)
* @n: given integer input
*
* Return: void
*
*/

#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n <= 0; n < 98; n++)
		{
			printf(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (n > 98; n = 98; n--)
		{
			printf(n);
			_putchar(',');
			_putchar(' ');
		}
	}
}

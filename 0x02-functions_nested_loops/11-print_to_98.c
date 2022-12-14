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
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; n >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
}

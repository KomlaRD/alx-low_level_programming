/**
 * _islower- checks for lowercase characters
 *
(* Description: Function checks a given input if it
* is a lowercase character)
* @c: input character
*
* Return: if input c is lowercase, return 1 else return 0
*/

#include "main.h"

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

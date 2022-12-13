/**
 * _abs- print an absolute value of an integer
 *
(* Description: Given an integer n,
* compute the absolute value)
*
* Return: return 0
*/

#include "main.h"

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

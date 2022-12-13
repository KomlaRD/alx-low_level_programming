/**
 * print_sign- print the sign of a given number
 *
(* Description: Given an input n, print + if n > 0
* or print - if number is les than 0
* or 0 if n is 0)
*
* @n: integer value
*
* Return: 1 if n is greater than 0,
* 0 if n is 0
* -1 if n is less than 0
*/

int print_sign(int n)
{
	char sign;

	if (n > 0)
	{
		_putchar("+\n");
		return (1);
	}
	else if (n == 0)
	{
		_putchar("0\n");
		return (0);
	}
	else
	{
		_putchar("-\n");
		return (-1);
	}
}

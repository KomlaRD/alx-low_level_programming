/**
 * _isalpha- check for alphabetic character
 *
(* Description: Function to check if an input is
* an alphabet lowercase or uppercase)
*
* Return: 1 if input c is a letter, lowercase or uppercase, otherwise 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

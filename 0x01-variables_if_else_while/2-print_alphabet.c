#include <stdio.h>
/**
 * main- print the letters of the alphabet
 (* Description: Use a for loop to print
* out the letters of the alphabets)
*
* Return: return 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

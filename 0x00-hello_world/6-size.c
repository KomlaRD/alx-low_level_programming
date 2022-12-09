#include <stdio.h>
/**
 * main - Prints size of types
 (*
 * Description: The function prints out the size of char,
 * int, long int, long long and float)
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)"), sizeof(char);
	printf("Size of an int: %lu byte(s)"), sizeof(int);
	printf("Size of a long int: %lu byte(s)"), sizeof(long int);
	printf("Size of a long long: %lu byte(s)"), sizeof(long long);
	printf("Size of a float: %lu byte(s)"), sizeof(float);
	return (0);
}

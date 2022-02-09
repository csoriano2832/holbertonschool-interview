#include "palindrome.h"

/**
 * is_palindrome - checks whether or not given unsigned integer is a palindrome
 * @n: the number to be checked
 *
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	char string[50];
	int index, length = 0;

	sprintf(string, "%lu", n);
	length = strlen(string);

	for (index = 0; index < length / 2; index++)
	{
		if (string[index] != string[length - index - 1])
			return (0);
	}

	return (1);
}

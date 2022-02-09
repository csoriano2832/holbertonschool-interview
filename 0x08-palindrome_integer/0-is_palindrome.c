#include "palindrome.h"

/**
 * is_palindrome - checks whether or not given unsigned integer is a palindrome
 * @n: the number to be checked
 *
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	int num = n;
	int digit, rev_num;

	rev_num = 0;
	while (n > 0)
	{
		digit = n % 10;
		rev_num = (rev_num * 10) + digit;
		n /= 10;
	}

	if (rev_num == num)
		return (1);
	else
		return (0);
}

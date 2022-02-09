#include "palindrome.h"

/**
 * is_palindrome - checks whether or not given unsigned integer is a palindrome
 * @n: the number to be checked
 *
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	int tempNumber = n;
	int dig, revNumber;

	revNumber = 0;
	while (n > 0)
	{
		dig = n % 10;
		revNumber = (revNumber * 10) + dig;
		n /= 10;
	}

	if (revNumber == tempNumber)
		return (1);
	else
		return (0);
}
/*
 * char string[50];
   int index, mid_left, mid_right, length = 0;

   sprintf(string, "%lu", n);
   length = strlen(string);
   mid_left = length / 2 - 1;

   if ((length % 2) == 0)
   mid_right = mid_left + 1;
   else
   mid_right = mid_left + 2;

   if (length > 1)
   {
   if (length == 2)
   return (string[0] == string[1]);

   for (index = 0; index < length / 2; index++)
   {
   if (string[index] != string[length - index - 1] ||
   string[mid_left] != string[mid_right])
   return (0);

   mid_left--;
   mid_right++;
   }*	}

   return (1);
   */


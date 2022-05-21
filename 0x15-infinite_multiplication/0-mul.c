#include "holberton.h"

/**
 * _isnumber - checks if string is number
 * @str: string
 *
 * Return: 1 if number, 0 if not
 */
int _isnumber(char *str)
{
	int i, check, d;

	d = 0, check = 1;
	for (i = 0; *(str + i) != 0; i++)
	{
		d = isdigit(*(str + i));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
 * _callocX - reserves memory initialized to 0
 * @nmemb: number of bytes
 *
 * Return: pointer
 */
char *_callocX(unsigned int nmemb)
{
	unsigned int i;
	char *p;

	p = malloc(nmemb + 1);
	if (p == 0)
		return (0);
	for (i = 0; i < nmemb; i++)
		p[i] = '0';
	p[i] = '\0';
	return (p);
}

/**
 * main - multiplies infinite numbers
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: 0 on success or error code 98 on exit
 */
int main(int argc, char **argv)
{
	int i, j, l1, l2, lful, mul, add, ten, ten2, tl, zer = 0;
	char *res;

	if (argc != 3 || _isnumber(argv[1]) == 0 || _isnumber(argv[2]) == 0)
		printf("Error\n"), exit(98);
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
		printf("0\n"), exit(0);
	l1 = strlen(argv[1]), l2 = strlen(argv[2]);
	lful = l1 + l2;
	res = _callocX(lful);
	if (res == 0)
		printf("Error\n"), exit(98);
	for (i = l2 - 1; i >= 0; i--)
	{
		ten = 0, ten2 = 0;
		for (j = l1 - 1; j >= 0; j--)
		{
			tl = i + j + 1;
			mul = (argv[1][j] - '0') * (argv[2][i] - '0') + ten;
			ten = mul / 10;
			add = (res[tl] - '0') + (mul % 10) + ten2;
			ten2 = add / 10;
			res[tl] = (add % 10) + '0';
		}
		res[tl - 1] = (ten + ten2) + '0';
	}
	if (res[0] == '0')
		zer = 1;
	for (; zer < lful; zer++)
		printf("%c", res[zer]);
	printf("\n");
	free(res);
	return (0);
}

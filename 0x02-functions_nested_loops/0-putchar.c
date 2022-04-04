#include "main.h"
/**
 * main - Print out main car ny char.
 * Description: Use the main header file
 * that contains the function _putchar
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');

	return (0);
}

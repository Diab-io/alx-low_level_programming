#include "main.h"

/**
 * main - calls te function print_alphabet
 * Return: Always 0(Success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch='a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - print alphabet followed by a new line 10 times
 *
 * Return: void
 */
void print_alphabet(void);

void print_alphabet_x10(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		print_alphabet();
	}
}


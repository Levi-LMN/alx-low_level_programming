#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10, starting from 0,
 *              without using any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

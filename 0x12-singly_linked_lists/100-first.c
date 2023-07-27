#include <stdio.h>

/* Function to be executed before main */
void my_constructor(void) __attribute__((constructor));

/**
 * my_constructor - Function that prints the desired lines before main.
 */
void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
/**
 * main - void
 *
 * description
 * Return: always 0
 */
int main(void)
{
	/* Rest of your main function code */
	return (0);
}


/**
 * is_prime_helper - Helper function to check if a number is prime
 * @n: The number to check
 * @i: The divisor to check if n is divisible by
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i);

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* Numbers less than or equal to 1 are not prime */

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to check if a number is prime
 * @n: The number to check
 * @i: The divisor to check if n is divisible by
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1); /* Found a prime number */

	if (n % i == 0)
		return (0); /* n is divisible by i, hence not prime */

	return (is_prime_helper(n, i + 1)); /* Check next divisor */
}


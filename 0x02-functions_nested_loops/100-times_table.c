#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The multiplication table requested
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			/* Handle formatting for numbers */
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
				if (result < 100)
					_putchar(' ');
			}

			/* Print result */
			if (result >= 100)
				_putchar(result / 100 + '0');
			else if (j != 0)
				_putchar(' ');

			if (result >= 10)
				_putchar((result / 10) % 10 + '0');
			else if (j != 0)
				_putchar(' ');

			_putchar(result % 10 + '0');
		}
		_putchar('\\n');
	}
}

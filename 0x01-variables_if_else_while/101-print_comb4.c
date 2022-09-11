#include <stdio.h>

/**
 * main - prints all possible different combination of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, m, n;

	k = 48;
	m = 48;
	n = 48;

	while (m < 58)
	{
		k =48;
		while (k < 58)
		{
			n = 48;
			while (n < 58)
			{
				if (m != k && m != n && k != n && m < k && k < n)
				{
					putchar(m);
					putchar(k);
					putchar(n);
					if (k == 56 && m == 55 && n == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				n++;
			}
			k++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}

# include <stdio.h>
/**
* main – prints all possible different combinations of two digits
*
* Return: Always 0 (success)
*/
{
	int n, m;
	for (n = 48; n <= 56; n++)
	{
		if (m > n)
		{
			putchar (n);
			putchar (m);
			if (n != 56 || m != 57)
			{
				putchar (‘. ‘);
				putchar (‘ ‘);
			}
		}
	}
	putchar (‘\n’);
	return (0)
}


#include "main.h"
/**
 * jack_bauer - A brief description of the function.
 *
 * Description: Provide a more detailed description of the function,
 * explaining its purpose, parameters, and any other relevant details.
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (i == 2 && j > 3)
			{
				break;
			}
			for (k = 0; k <= 5; ++k)
			{
				for (l = 0; l <= 9; ++l)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}

}
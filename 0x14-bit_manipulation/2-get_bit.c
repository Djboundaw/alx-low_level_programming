#include "main.h"

/**
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b, num;
	int i, nbr;

	num = n;
	nbr = 0;
	i = 40;
	while (i >= 0)
	{
		b = num >> i;
		if (b & 1)
			break;
		i--;
	}
	while (i >= 0)
	{
			                b = n >> i;
					                if (b & 1)
								                {
											                        _putchar('1');
														                        nbr++;
																	                }
							                else if (nbr)
										                        _putchar('0');
									                i--;
											        }
        if (!nbr)
	        _putchar('0');
}

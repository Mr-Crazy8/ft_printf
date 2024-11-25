#include "ft_printf.h"

int hex_len(unsigned int num)
{
	int len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}



void hex(unsigned int num, char x)
{
	int count  = 0;
	char X0;
	char x0;
	if (num > 0)
	{
		hex(num / 16, x);
		if (num%16 < 10)
		   count += putnbr(num%16);
		else if (x == 'X')
		{
			X0 = (num%16) + 55;
			count += write(1, &X0, 1);
		}
		else if (x == 'x')
		{
			x0 = (num%16) + 87;
			count += write(1, &x0, 1); 
		}
	}
}



int format_X_x(unsigned int num, char x)
{
	if (num == 0)
	   return (write(1, "0", 1));
	else
	   hex(num, x);
	return (hex_len(num));
}
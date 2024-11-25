#include "ft_printf.h"

unsigned int format_u(unsigned int nbr) 
{
	int count = 0;
	char nb;
	if (nbr >= 10)
		count += format_u(nbr / 10);
	nb = nbr % 10 + '0';
	count += write(1, &nb, 1);

	return (count);	   
}
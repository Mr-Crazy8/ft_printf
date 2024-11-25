#include "ft_printf.h"



static int ft_base(unsigned long nbr, char *base)
{
	int count = 0;
	if (nbr >= 16)
	   count += ft_base(nbr / 16, base);
	count += write(1, &base[nbr % 16], 1);

	return (count);
}
int format_p(void *ptr)
{
	int count = 0;
	unsigned long address = (unsigned long)ptr;
	char *base = "0123456789abcdef";
	count = write(1, "0x", 2);
	count += ft_base(address, base);

	return (count);
}
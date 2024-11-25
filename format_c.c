#include "ft_printf.h"

int format_c(char str)
{
	int count;
	
	count = write(1, &str, 1);
	return (count);
}
#include "ft_printf.h"


int format_s(char *str)
{
	int count;
	if (str == NULL)
	{
		return (write(1, "(null)", 6));
	}
	count = write(1, str, ft_strlen(str));

	return (count);
}
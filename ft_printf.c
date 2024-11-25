#include "ft_printf.h"

int format_handle(va_list list, const char *str)
{
	int count;
	char *str0 = (char *)str;
	count = 0;
	int i = 0;
	if (str0[i] == '%')
		count += write(1, "%", 1);
	else if (str0[i] == 'c')
		count += format_c((char)va_arg(list, int));
	else if (str0[i] == 's')
		count += format_s(va_arg(list, char *));
	else if (str0[i] == 'd' || *str == 'i')
		count += format_d_i(va_arg(list, int));
	else if (str0[i] == 'u')
		count += format_u(va_arg(list, unsigned int));
	else if (str0[i] == 'X' || str[i] == 'x')
		count += format_X_x(va_arg(list, int), *str0);
	else if (str0[i] == 'p')
	{
		char *ptr = va_arg(list, char *);
		count += format_p(ptr);
	}
	

	return (count);
}


int ft_printf(const char *str, ...)
{
	va_list list;
	int i;
	int count;
	va_start(list, str);
	i = 0;
	count = 0;
	if (write(1, "", 0) == -1)
	    return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			count += format_handle(list, &str[i + 1]);
			i++;   
		}
		else
		  count += write(1, &str[i], 1);
		i++;
	}
	va_end(list);
	return (count);
}



///if (str[i] == '%' && str[i + 1] == ' ' &&  str[i + 1] = '#')
//// count += ft_printf(list, str[i + 1]);
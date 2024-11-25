#include "ft_printf.h"


int ft_printf_bonus(va_list list, const char *str)
{
	int i = 0;
	int count = 0;
	int num = va_arg(list, int);
	while (str[i] != '\0')
	{
		while (str[i + 1] == '#' || str[i + 1] == ' ')
		       i++;
		if (str[i + 1] == '+' & num > 0)
		{
			count += write(1, "+", 1);
			count += putnbr(num);
		}
		else
		  count += putnbr(num);
	}

	return (count);
}




//%d
// if (str[i + 1] == '#' || str[i + 1] == ' ' || str[i + 1] == '+')
// 			{
// 				i++;
// 				if (num > 0)
// 				{
// 				   write(1, "+", 1);
// 				   putnbr(num);
// 				}
// 				else
// 				{
// 				   //write(1, "-", 1);
// 				   putnbr(num);
// 				}
// 		    }




 if (str[i + 1] == '#' || str[i + 1] == ' ' || str[i + 1] == '+')
 {
	i++;
	if(str[i + 1] = 'x')
	{
		write(1, "0x", 1);
		format_X_x(num, &str[i + 1]);
		
	}
	else
	{
		write(1, "0X", 2);
		format_X_x(num, &str[i + 1]);

	}
 }

//x X
 if (str[i + 1] == '#' || str[i + 1] == ' ' || str[i + 1] == '+')
		{
			while (str[i + 1] == '#' || str[i + 1] == ' ' || str[i + 1] == '+')
			     i++;
			if(str[i + 1] == 'x')
			{
				write(1, "0x", 2);
				format_X_x(num, str[i + 1]);
				}
				else if (str[i + 1] == 'X')
				{
					write(1, "0X", 2);
					format_X_x(num, str[i + 1]);
				}
				i++;
 }
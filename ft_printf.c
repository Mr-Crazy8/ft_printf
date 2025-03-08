/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:49:20 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/25 22:49:23 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_handle(va_list list, const char *str)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (str[i] == '%')
		count = write(1, "%", 1);
	else if (str[i] == 'c')
		count = format_c((char)va_arg(list, int));
	else if (str[i] == 's')
		count = format_s(va_arg(list, char *));
	else if (str[i] == 'd' || str[i] == 'i')
		count = format_d_i(va_arg(list, int));
	else if (str[i] == 'u')
		count = format_u(va_arg(list, unsigned int));
	else if (str[i] == 'X' || str[i] == 'x')
		count = formathex(va_arg(list, int), *str);
	else if (str[i] == 'p')
		count = format_p(va_arg(list, char *));
	else
		count = write(1, str, 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(list, str);
	if (write(1, "", 0) == -1)
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			count += format_handle(list, &str[i + 1]);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == '\0')
			break ;
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(list);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:46:11 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/25 22:46:14 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_s(char *str)
{
	int	count;

	if (str == NULL)
	{
		return (write(1, "(null)", 6));
	}
	count = write(1, str, ft_strlen(str));
	return (count);
}

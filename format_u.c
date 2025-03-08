/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:47:26 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/25 22:47:49 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	format_u(unsigned int nbr)
{
	int		count;
	char	nb;

	count = 0;
	if (nbr >= 10)
		count += format_u(nbr / 10);
	nb = nbr % 10 + '0';
	count += write(1, &nb, 1);
	return (count);
}

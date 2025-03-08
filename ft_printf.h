/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:51:45 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/25 22:51:55 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int				format_c(char str);
int				format_s(char *str);
int				format_d_i(int nbr);
unsigned int	format_u(unsigned int nbr);
int				formathex(unsigned int num, char x);
int				format_p(void *ptr);
int				ft_strlen(char *str);
int				ft_printf(const char *str, ...);
int				putnbr(int b);
int				ft_printf_bonus(va_list list, const char *str);

#endif

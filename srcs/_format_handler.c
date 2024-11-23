/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _format_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:24:10 by ttsubo            #+#    #+#             */
/*   Updated: 2024/11/23 18:47:30 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_char(va_list args)
{
	return (ft_putchar_fd_retlen((char)va_arg(args, int), FD_STDOUT));
}

int	handle_string(va_list args)
{
	return (ft_putstr_fd_retlen(va_arg(args, char *), FD_STDOUT));
}

int	handle_decimal(va_list args)
{
	return (ft_putstr_fd_retlen(ft_itoa(va_arg(args, int)), FD_STDOUT));
}

int	handle_unsigned(va_list args)
{
	unsigned int	u_num;
	char			dst[10];

	u_num = va_arg(args, unsigned int);
	return (ft_putstr_fd_retlen(ft_utoa(u_num, dst), FD_STDOUT));
}

int	handle_percent(va_list args)
{
	(void)args;
	return (ft_putchar_fd_retlen('%', FD_STDOUT));
}

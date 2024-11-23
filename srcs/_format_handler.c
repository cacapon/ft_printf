/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _format_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:24:10 by ttsubo            #+#    #+#             */
/*   Updated: 2024/11/23 13:57:16 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_char(va_list args)
{
	return (ft_putchar_fd_retlen((char)va_arg(args, int), 1));
}

int	handle_string(va_list args)
{
	return (ft_printf(va_arg(args, char *)));
}

int	handle_decimal(va_list args)
{
	return (ft_printf(ft_itoa(va_arg(args, int))));
}

int	handle_unsigned(va_list args)
{
	return (ft_printf(ft_utoa(va_arg(args, unsigned int))));
}

int	handle_percent(va_list args)
{
	(void)args;
	return (ft_putchar_fd_retlen('%', 1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _format_handler2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:24:10 by ttsubo            #+#    #+#             */
/*   Updated: 2024/11/23 18:47:56 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_ptr(va_list args)
{
	char	dst[MAX_PTR_LEN];

	ft_getptr(dst, va_arg(args, void *), MAX_PTR_LEN);
	return (ft_putstr_fd_retlen(dst, FD_STDOUT));
}

int	handle_lower_hex(va_list args)
{
	char	hex_str[MAX_HEX_LEN];

	ft_itoh(va_arg(args, int), hex_str, HEX_IS_LOWER);
	return (ft_putstr_fd_retlen(hex_str, FD_STDOUT));
}

int	handle_upper_hex(va_list args)
{
	char	hex_str[MAX_HEX_LEN];

	ft_itoh(va_arg(args, int), hex_str, HEX_IS_UPPER);
	return (ft_putstr_fd_retlen(hex_str, FD_STDOUT));
}

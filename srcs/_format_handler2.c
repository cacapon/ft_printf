/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _format_handler2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:24:10 by ttsubo            #+#    #+#             */
/*   Updated: 2024/11/23 16:50:15 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_ptr(va_list args)
{
	int mem_len;
	
	mem_len = 20;
	char dst[mem_len];
	ft_getptr(dst, va_arg(args, void *), mem_len);
	return (ft_putstr_fd_retlen(dst, 1));
}

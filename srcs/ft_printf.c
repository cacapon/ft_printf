/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:24:10 by ttsubo            #+#    #+#             */
/*   Updated: 2024/11/20 13:29:51 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static char	_convert_format(char format)
// {
// 	if(format)
// }

/**
 * @brief Converts and outputs strings according to format
 *
 * @param [in] str 	: Strings to output (may include format specifiers)
 * @param [in] ... 	: Variables to be given to the format
 * @return int 		: Number of characters output (not including '\0')
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			str++;
			if (*str == 'c')
				count += ft_putchar_fd_retlen((char)va_arg(args, int), 1);
			else if (*str == 's')
				count += ft_printf(va_arg(args, char *));
			else if (*str == 'd')
				count += ft_printf(ft_itoa(va_arg(args, int)));
			else
			{
				count += ft_putchar_fd_retlen('%', 1);
				count += ft_printf(str);
			}
		}
		else
			count += ft_putchar_fd_retlen(*str, 1);
		str++;
	}
	return (count);
}

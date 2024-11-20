/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:24:10 by ttsubo            #+#    #+#             */
/*   Updated: 2024/11/20 11:23:52 by ttsubo           ###   ########.fr       */
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
	va_list args;
	va_start(args, str);
	int count;

	count = 0;
	while(*str)
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			str++;
			if (*str == 'c')
				count += ft_putchar_fd((char)va_arg(args, int), 1);
			else if (*str == 's')
				ft_printf(va_arg(args, char *));
			else
				ft_printf(str);
		}
		else
			ft_putchar_fd(*str, 1);
		str++;
	}
	return (-1);
}

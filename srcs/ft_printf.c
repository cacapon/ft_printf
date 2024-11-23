/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:24:10 by ttsubo            #+#    #+#             */
/*   Updated: 2024/11/23 14:14:35 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	_format(const char **str, va_list args);

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
		count += _format(&str, args);
	va_end(args);
	return (count);
}

/**
 * @brief strが%の場合それに応じたフォーマットを出力します。
 *
 * @param str	: formatを含む可能性がある文字列
 * @param args	: formatに関する引数
 * @return int  : 出力した文字列の長さ
 */
static int	_format(const char **str, va_list args)
{
	int			count;
	t_handler	handlers[MAX_HANDLER];

	count = 0;
	ft_bzero(handlers, sizeof(handlers));
	handlers['c'] = handle_char;
	handlers['s'] = handle_string;
	handlers['d'] = handle_decimal;
	handlers['i'] = handle_decimal;
	handlers['u'] = handle_unsigned;
	handlers['%'] = handle_percent;
	if (**str != '%')
	{
		count += ft_putchar_fd_retlen(**str, 1);
		(*str)++;
		return (count);
	}
	(*str)++;
	if (handlers[(unsigned char)**str])
		count += handlers[(unsigned char)**str](args);
	else if (*str)
		(*str)++;
	(*str)++;
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:24:10 by ttsubo            #+#    #+#             */
/*   Updated: 2024/11/19 18:01:29 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return:	output char length. (without '\0')
*/

// va_start(va_list, any):
// va_arg,va_endが後に使うapを初期化する anyには固定長の変数をセット
// va_arg(ap, type):		va指定した型で取り出す
// va_copy:
//

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
	ft_putstr_fd((char *)str, 1);

	return (0);
}

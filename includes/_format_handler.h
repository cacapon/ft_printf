/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _format_handler.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:24:10 by ttsubo            #+#    #+#             */
/*   Updated: 2024/11/23 18:49:12 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORMAT_HANDLER_H
# define _FORMAT_HANDLER_H

# include <limits.h>
# include <stdarg.h>
# define MAX_HANDLER UCHAR_MAX
# define MAX_PTR_LEN 20
# define MAX_HEX_LEN 9
# define HEX_IS_LOWER 0
# define HEX_IS_UPPER 1
# define FD_STDOUT 1

// handler 1
int	handle_char(va_list args);
int	handle_string(va_list args);
int	handle_decimal(va_list args);
int	handle_unsigned(va_list args);
int	handle_percent(va_list args);

// handler 2
int	handle_ptr(va_list args);
int	handle_lower_hex(va_list args);
int	handle_upper_hex(va_list args);

#endif

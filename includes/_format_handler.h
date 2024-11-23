/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _format_handler.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:24:10 by ttsubo            #+#    #+#             */
/*   Updated: 2024/11/23 16:46:28 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORMAT_HANDLER_H
# define _FORMAT_HANDLER_H

# include <limits.h>
# include <stdarg.h>
# define MAX_HANDLER UCHAR_MAX

int	handle_char(va_list args);
int	handle_string(va_list args);
int	handle_decimal(va_list args);
int	handle_unsigned(va_list args);
int	handle_percent(va_list args);
int	handle_ptr(va_list args);

#endif

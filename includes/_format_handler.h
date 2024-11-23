/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _format_handler.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:24:10 by ttsubo            #+#    #+#             */
/*   Updated: 2024/11/23 14:05:23 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORMAT_HANDLER_H
# define _FORMAT_HANDLER_H

# define MAX_HANDLER 256
# include <stdarg.h>

int	handle_char(va_list args);
int	handle_string(va_list args);
int	handle_decimal(va_list args);
int	handle_unsigned(va_list args);
int	handle_percent(va_list args);

#endif
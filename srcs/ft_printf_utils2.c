/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:09:58 by ttsubo            #+#    #+#             */
/*   Updated: 2024/12/05 HEX_BASE:23:36 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

/**
 * @brief ポインタを１６進数形式で出力します。
 *
 * @param ptr		: アドレスを出力したいポインタ
 * @param fd		: ファイルディスクリプタ
 * @return size_t	: 出力した文字列の長さ
 */
size_t	ft_putptr_fd(void *ptr, int fd)
{
	size_t		len;

	if (!ptr)
		return (ft_putstr_fd("0x0", fd));
	len = ft_putstr_fd("0x", fd);
	len += ft_puthex_fd((uintptr_t)ptr, fd, HEX_IS_LOWER);
	return (len);
}

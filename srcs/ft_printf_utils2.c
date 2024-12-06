/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:09:58 by ttsubo            #+#    #+#             */
/*   Updated: 2024/12/06 12:30:34 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

/**
 * @brief ft_putptr_fdのアドレス出力用の再帰関数
 *
 * @param hex 		: 16進数のアドレス
 * @param fd 		: ファイルディスクリプタ
 * @return size_t	: 出力した文字の長さ
 */
static size_t	_ft_putptr_fd_rec(uintptr_t hex, int fd)
{
	char	c;
	size_t	len;

	len = 0;
	if (hex >= HEX_BASE)
		len += _ft_putptr_fd_rec(hex / HEX_BASE, fd);
	c = LOWER_HEX[hex % HEX_BASE];
	if (ft_putchar_fd(c, fd) == 1)
		len++;
	return (len);
}

/**
 * @brief ポインタを１６進数形式で出力します
 *
 * @param ptr		: アドレスを出力したいポインタ
 * @param fd		: ファイルディスクリプタ
 * @return size_t	: 出力した文字列の長さ
 */
size_t	ft_putptr_fd(void *ptr, int fd)
{
	size_t	len;

	if (!ptr)
		return (ft_putstr_fd("(nil)", fd));
	len = ft_putstr_fd("0x", fd);
	len += _ft_putptr_fd_rec((uintptr_t)ptr, fd);
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:59:49 by kqueiroz          #+#    #+#             */
/*   Updated: 2025/09/02 17:47:30 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	int	count;

	if (fd < 0)
		return (0);
	if (!ptr)
	{
		ft_putstr_fd("(nil)", fd);
		return (5);
	}
	count = 2;
	ft_putstr_fd("0x", fd);
	count += ft_puthex_fd((unsigned long)ptr, 'x', fd);
	return (count);
}

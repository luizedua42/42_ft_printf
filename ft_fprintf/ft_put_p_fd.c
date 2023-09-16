/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:02:25 by luizedua          #+#    #+#             */
/*   Updated: 2023/09/15 22:30:12 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfprintf.h"

int	ft_put_p_fd(unsigned long int nb, int fd)
{
	int	ret;

	ret = 2;
	if (nb == 0)
	{
		write(fd, "(nil)", 5);
		return (5);
	}
	write(fd, "0x", 2);
	ret += ft_putnbr_base_low_fd(nb, fd);
	return (ret);
}

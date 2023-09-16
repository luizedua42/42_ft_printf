/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:12:02 by luizedua          #+#    #+#             */
/*   Updated: 2023/09/15 22:30:12 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfprintf.h"

int	ft_put_uns_nbr_fd(unsigned int nb, int fd)
{
	char	a;
	int		ret;

	a = 0;
	ret = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		ret += ft_put_uns_nbr_fd(nb, fd);
	}
	else if (nb > 9)
	{
		ret += ft_put_uns_nbr_fd(nb / 10, fd);
		ret += ft_put_uns_nbr_fd(nb % 10, fd);
	}
	else
	{
		a = '0' + nb % 10;
		ret += ft_putchar_fd(a, fd);
	}
	return (ret);
}

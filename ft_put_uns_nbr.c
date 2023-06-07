/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:12:02 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/07 13:36:11 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_uns_nbr(unsigned int nb)
{
	char	a;
	int		ret;

	a = 0;
	ret = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		ret += ft_put_uns_nbr(nb);
	}
	else if (nb > 9)
	{
		ret += ft_put_uns_nbr(nb / 10);
		ret += ft_put_uns_nbr(nb % 10);
	}
	else
	{
		a = '0' + nb % 10;
		ret += ft_putchar(a);
	}
	return (ret);
}

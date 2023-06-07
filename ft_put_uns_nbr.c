/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:12:02 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/06 23:19:17 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_put_uns_nbr(unsigned int nb)
{
	char	a;

	a = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_put_uns_nbr(nb);
	}
	else if (nb > 9)
	{
		ft_put_uns_nbr(nb / 10);
		ft_put_uns_nbr(nb % 10);
	}
	else
	{
		a = '0' + nb % 10;
		ft_putchar(a);
	}
}

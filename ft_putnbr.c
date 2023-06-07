/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:54:02 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/07 12:27:22 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int nb)
{
	char	a;
	int		ret;

	a = 0;
	ret =  0;
	if (nb == -2147483648)
	{
		ret +=  ft_putchar('-');
		ret +=  ft_putchar('2');
		ret +=ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		nb = nb * (-1);
		ret +=  ft_putchar('-');
		ret +=ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ret +=ft_putnbr(nb / 10);
		ret +=ft_putnbr(nb % 10);
	}
	else
	{
		a = '0' + nb % 10;
		ret +=  ft_putchar(a);
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:02:25 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/07 11:47:04 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_put_p(unsigned long int nb)
{
	if (nb == 0)
	{
		write(1, "(nil)", 5);
		return ;
	}
	write(1, "0x", 2);
	if (nb >= 16)
		ft_putnbr_base_low(nb / 16);
	write (1, &HEX_LOW[nb % 16], 1);
}
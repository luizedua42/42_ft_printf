/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_low.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:32:03 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/06 23:19:39 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_base_low(unsigned int nb)
{
	static const char	hex[] = "0123456789abcdef";

	if (nb < 0)
		nb = nb * (-1);
	if (nb >= 16)
		ft_putnbr_base_low(nb / 16);
	write (1, &hex[nb % 16], 1);
}

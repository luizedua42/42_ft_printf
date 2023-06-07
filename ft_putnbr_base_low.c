/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_low.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:32:03 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/07 11:16:28 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_base_low(unsigned int nb)
{
	if (nb >= 16)
		ft_putnbr_base_low(nb / 16);
	write (1, &HEX_LOW[nb % 16], 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_up.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:32:03 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/07 11:33:31 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_base_low(unsigned int nb)
{
	if (nb >= 16)
		ft_putnbr_base_low(nb / 16);
	write (1, &HEX_UPP[nb % 16], 1);
}

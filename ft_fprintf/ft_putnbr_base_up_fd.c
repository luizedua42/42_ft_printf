/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_up_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:32:03 by luizedua          #+#    #+#             */
/*   Updated: 2023/09/15 22:30:12 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfprintf.h"

int	ft_putnbr_base_up_fd(unsigned int nb, int fd)
{
	int	ret;

	ret = 0;
	if (nb >= 16)
		ret += ft_putnbr_base_up_fd(nb / 16, fd);
	ret += (int)write(fd, &HEX_UPP[nb % 16], 1);
	return (ret);
}

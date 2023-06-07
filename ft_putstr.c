/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:37:45 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/07 13:35:23 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int	ret;

	ret = 0;
	if (s == NULL)
		return (ft_putstr("(null)"));
	while (*s)
	{
		ret += ft_putchar(*s);
		s++;
	}
	return (ret);
}

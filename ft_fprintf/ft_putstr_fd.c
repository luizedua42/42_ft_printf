/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:37:45 by luizedua          #+#    #+#             */
/*   Updated: 2023/09/15 22:30:12 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfprintf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	ret;

	ret = 0;
	if (s == NULL)
		return (ft_putstr_fd("(null)", fd));
	while (*s)
	{
		ret += ft_putchar_fd(*s, fd);
		s++;
	}
	return (ret);
}

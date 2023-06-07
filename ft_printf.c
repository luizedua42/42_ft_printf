/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:53:49 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/07 11:49:46 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *input, ...)
{
	int		i;
	va_list	arg_lst;

	i = 0;
	va_start(arg_lst, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			if (input[i] == 'c')
				ft_putchar(va_arg(arg_lst, int));
			if (input[i] == 's')
				ft_putstr(va_arg(arg_lst, char *));
			if (input[i] == 'd')
				ft_putnbr(va_arg(arg_lst, int));
			if (input[i] == 'i')
				ft_putnbr(va_arg(arg_lst, int));
			if (input[i] == 'x')
				ft_putnbr_base_low(va_arg(arg_lst, unsigned int));
			if (input[i] == 'X')
				ft_putnbr_base_up(va_arg(arg_lst, unsigned int));
			if (input[i] == '%')
				ft_putchar('%');
			if (input[i] == 'u')
				ft_put_uns_nbr(va_arg(arg_lst, unsigned int));
			if (input[i] == 'p')
				ft_put_p(va_arg(arg_lst, unsigned long int));
		}
		else
			ft_putchar(input[i]);
		i++;
	}
	va_end(arg_lst);
	return (0);
}

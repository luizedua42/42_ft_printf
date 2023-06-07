/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:53:49 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/07 13:35:18 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	arg_check(va_list arg_lst, const char *input, int i)
{
	int	ret;

	ret = 0;
	if (input[i] == 'c')
		ret += ft_putchar(va_arg(arg_lst, int));
	else if (input[i] == 's')
		ret += ft_putstr(va_arg(arg_lst, char *));
	else if (input[i] == 'd')
		ret += ft_putnbr(va_arg(arg_lst, int));
	else if (input[i] == 'i')
		ret += ft_putnbr(va_arg(arg_lst, int));
	else if (input[i] == 'x')
		ret += ft_putnbr_base_low(va_arg(arg_lst, unsigned int));
	else if (input[i] == 'X')
		ret += ft_putnbr_base_up(va_arg(arg_lst, unsigned int));
	else if (input[i] == 'u')
		ret += ft_put_uns_nbr(va_arg(arg_lst, unsigned int));
	else if (input[i] == 'p')
		ret += ft_put_p(va_arg(arg_lst, unsigned long int));
	else if (input[i] == '%')
		ret += ft_putchar('%');
	else
		ret += ft_putchar('%');
	return (ret);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	va_list	arg_lst;
	int		ret;

	i = 0;
	ret = 0;
	if (input == NULL)
		return (-1);
	va_start(arg_lst, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			ret += arg_check(arg_lst, input, i);
		}
		else
			ret += ft_putchar(input[i]);
		i++;
	}
	va_end(arg_lst);
	return (ret);
}

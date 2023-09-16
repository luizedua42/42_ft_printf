/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:53:49 by luizedua          #+#    #+#             */
/*   Updated: 2023/09/15 22:30:12 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfprintf.h"

static int	arg_check(va_list arg_lst, const char *input, int i, int fd)
{
	int	ret;

	ret = 0;
	if (input[i] == 'c')
		ret += ft_putchar_fd(va_arg(arg_lst, int), fd);
	else if (input[i] == 's')
		ret += ft_putstr_fd(va_arg(arg_lst, char *), fd);
	else if (input[i] == 'd')
		ret += ft_putnbr_fd(va_arg(arg_lst, int), fd);
	else if (input[i] == 'i')
		ret += ft_putnbr_fd(va_arg(arg_lst, int), fd);
	else if (input[i] == 'x')
		ret += ft_putnbr_base_low_fd(va_arg(arg_lst, unsigned int), fd);
	else if (input[i] == 'X')
		ret += ft_putnbr_base_up_fd(va_arg(arg_lst, unsigned int), fd);
	else if (input[i] == 'u')
		ret += ft_put_uns_nbr_fd(va_arg(arg_lst, unsigned int), fd);
	else if (input[i] == 'p')
		ret += ft_put_p_fd(va_arg(arg_lst, unsigned long int), fd);
	else if (input[i] == '%')
		ret += ft_putchar_fd('%', fd);
	else
		ret += ft_putchar_fd('%', fd);
	return (ret);
}

int	ft_fprintf(int fd, const char *input, ...)
{
	int		i;
	va_list	arg_lst;
	int		ret;

	i = 0;
	ret = 0;
	if (input == NULL || fd < 0)
		return (-1);
	va_start(arg_lst, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			ret += arg_check(arg_lst, input, i, fd);
		}
		else
			ret += ft_putchar_fd(input[i], fd);
		i++;
	}
	va_end(arg_lst);
	return (ret);
}
// #include <stdio.h>

// int main()
// {
// 	ft_fprintf(2, "%s", "teste");
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:53:49 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/06 17:14:49 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libftprintf.h"
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	va_list	arg_lst;
	
	i = 0;
	va_start(arg_lst, input);
	while (input[i] != '\0')
	{
		if(input[i] == '%')
		{
			i++;
			if (input[i] == 'c')
				ft_putchar(va_arg(arg_lst, int));
			//if (input[i] == 's')
			//	ft_putstr(va_arg(arg_lst, char *));
			//if (input[i] == 'd')
				// ft_putnbr(va_arg(arg_lst, int));
			//if (input[i] == 'i')
			//	ft_putnbr(va_arg(arg_lst, int));
		}
		else
			ft_putchar(input[i]);
		i++;
	}
	va_end(arg_lst);
	return (0);
}

int main ()
{
	ft_printf("teste: %c", 'a');
}

//			if (input[i] == 'p')//0123456789abcdef
				//converter em base 16 com 0x...(funcao dos x)
			// if (input[i] == 'u')
			//	ft_putunsint(va_arg(arg_lst, int));
			// if (input[i] == 'x')//0123456789abcdef
				//base 16 abcdef
			// if (input[i] == 'X')//0123456789ABCDEF
			//	base 16 ABCDEF
			// if (input[i] == '%')
			//	ft_putchar('%');
			//somar o valor dos returns
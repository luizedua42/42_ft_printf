/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:54:59 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/07 13:38:45 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# define HEX_LOW "0123456789abcdef"
# define HEX_UPP "0123456789ABCDEF"

int		ft_printf(const char *input, ...);
int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr_base_low(unsigned int nb);
int		ft_putnbr_base_up(unsigned int nb);
int		ft_put_uns_nbr(unsigned int nb);
int		ft_put_p(unsigned long int nb);
#endif
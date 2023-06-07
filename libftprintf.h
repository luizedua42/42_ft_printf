/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:54:59 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/07 11:47:27 by luizedua         ###   ########.fr       */
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
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr_base_low(unsigned int nb);
void	ft_putnbr_base_up(unsigned int nb);
void	ft_put_uns_nbr(unsigned int nb);
void	ft_put_p(unsigned long int nb);
#endif
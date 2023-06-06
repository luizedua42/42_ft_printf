/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:54:59 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/06 17:18:51 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *s);



#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftfprintf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:54:59 by luizedua          #+#    #+#             */
/*   Updated: 2023/09/15 22:28:24 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTFPRINTF_H
# define LIBFTFPRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# define HEX_LOW "0123456789abcdef"
# define HEX_UPP "0123456789ABCDEF"

int		ft_fprintf(int fd, const char *input, ...);
int		ft_putnbr_fd(int nb, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_base_low_fd(unsigned int nb, int fd);
int		ft_putnbr_base_up_fd(unsigned int nb, int fd);
int		ft_put_uns_nbr_fd(unsigned int nb, int fd);
int		ft_put_p_fd(unsigned long int nb, int fd);
#endif
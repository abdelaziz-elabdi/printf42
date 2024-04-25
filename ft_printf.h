/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:33:37 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/12/08 09:30:03 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *mrben, ...);
void	ft_putstr(char *str, int *len);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_upper_hexa(unsigned int num, int *len);
void	ft_lower_hexa(unsigned int num, int *len);
void	ft_put_unsign(unsigned int num, int *len);
void	ft_put_ptr(unsigned long num, int *len);
void	ft_put_addr(unsigned long num, int *len);

#endif

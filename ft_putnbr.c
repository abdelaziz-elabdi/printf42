/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:37:18 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/12/09 19:54:31 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	long	i;
	int		c;

	i = n;
	if (i < 0)
	{
		ft_putchar('-', len);
		i = -i;
	}
	if (i < 10)
	{
		c = i + 48;
		ft_putchar(c, len);
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10, len);
		ft_putnbr(i % 10, len);
	}
}

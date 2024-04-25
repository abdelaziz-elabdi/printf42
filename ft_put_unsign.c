/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:11:36 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/12/08 09:27:02 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsign(unsigned int num, int *len)
{
	int	c;

	if (num == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	if (num < 10)
	{
		c = num + '0';
		ft_putchar(c, len);
	}
	else
	{
		ft_put_unsign(num / 10, len);
		ft_put_unsign(num % 10, len);
	}
}

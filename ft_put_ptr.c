/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:16:21 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/12/08 09:27:36 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_ptr(unsigned long num, int *len)
{
	if (num < 16)
	{
		if (num < 10)
			ft_putchar(num + 48, len);
		else
			ft_putchar(num +87, len);
	}
	else
	{
		ft_put_ptr(num / 16, len);
		ft_put_ptr(num % 16, len);
	}
}

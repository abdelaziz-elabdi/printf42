/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:55:50 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/12/08 09:39:28 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lower_hexa(unsigned int num, int *len)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (num < 16)
	{
		ft_putchar(hexa[num], len);
	}
	else
	{
		ft_lower_hexa(num / 16, len);
		ft_putchar(hexa[num % 16], len);
	}
}

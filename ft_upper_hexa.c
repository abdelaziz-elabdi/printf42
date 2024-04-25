/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:46:03 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/12/09 19:54:48 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_upper_hexa(unsigned int num, int *len)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (num < 16)
	{
		ft_putchar(hexa[num], len);
	}
	else
	{
		ft_upper_hexa(num / 16, len);
		ft_putchar(hexa[num % 16], len);
	}
}

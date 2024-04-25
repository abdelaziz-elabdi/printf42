/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:22:11 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/12/08 09:23:49 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
	{
		str = "(null)";
		while (str[i] != '\0')
		{
			ft_putchar(str[i], len);
			i++;
		}
	}
	else
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i], len);
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:31:44 by ael-abdi          #+#    #+#             */
/*   Updated: 2023/12/09 18:38:29 by ael-abdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	checkvar(const char *mrben, va_list args, int *len)
{
	if (*mrben == 's')
		ft_putstr((va_arg(args, char *)), len);
	else if (*mrben == 'd' || *mrben == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (*mrben == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (*mrben == 'u')
		ft_put_unsign (va_arg(args, unsigned int), len);
	else if (*mrben == 'x' || *mrben == 'X')
	{
		if (*mrben == 'X')
			ft_upper_hexa(va_arg(args, unsigned int), len);
		else
			ft_lower_hexa(va_arg(args, unsigned int), len);
	}
	else if (*mrben == 'p')
		ft_put_addr(va_arg(args, unsigned long), len);
	else if (*mrben == '%')
		ft_putchar('%', len);
	else
	{
		ft_putchar(*mrben, len);
	}
	return (*len);
}

int	ft_printf(const char *mrben, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start(args, mrben);
	len = 0;
	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (mrben[i])
	{
		if (mrben[i] == '%')
		{
			if (mrben[i + 1] == '\0')
				return (len);
			checkvar(&mrben[++i], args, &len);
		}
		else
			ft_putchar(mrben[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}

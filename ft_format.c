/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:44:15 by eamirkha          #+#    #+#             */
/*   Updated: 2022/04/02 16:18:59 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list arg)
{
	int		i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(arg, int));
	else if (c == 'd' || c == 'i')
		i += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		i += ft_putunbr(va_arg(arg, unsigned int));
	else if (c == 's')
		i += ft_putstr(va_arg(arg, char *));
	else if (c == 'x' || c == 'X')
		i += ft_puthex(va_arg(arg, unsigned int), c);
	else if (c == 'p')
		i += ft_putptr(va_arg(arg, void *));
	else if (c == '%')
		i += ft_putper(c);
	else
	{
		i += 2;
		ft_putchar('%');
		ft_putchar(c);
	}
	return (i);
}

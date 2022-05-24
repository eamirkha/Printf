/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:24:53 by eamirkha          #+#    #+#             */
/*   Updated: 2022/04/02 16:07:56 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			len += ft_format(s[i + 1], arg);
			i++;
		}
		else
		{
			len += ft_putchar(s[i]);
		}
		i++;
	}
	va_end(arg);
	return (len);
}

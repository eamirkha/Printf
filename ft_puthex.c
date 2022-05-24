/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:15:30 by eamirkha          #+#    #+#             */
/*   Updated: 2022/04/09 14:14:24 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	str_rev(char *str)
{
	char	p[20];
	int		begin;
	int		end;
	int		count;

	count = ft_strlen(str);
	end = count - 1;
	begin = 0;
	while (begin < count)
	{
		p[begin] = str[end];
		end--;
		begin++;
	}
	p[begin] = '\0';
	ft_putstr(p);
}

static int	ft_put_uorl(char *st, unsigned long int num, char *hexp)
{
	int	i;

	i = 0;
	while (num / 16 != 0)
	{
		st[i] = hexp[num % 16];
		num /= 16;
		i++;
	}
	st[i] = hexp[num % 16];
	st[i + 1] = '\0';
	i = ft_strlen(st);
	str_rev(st);
	return (i);
}

int	ft_puthex(unsigned long int n, char c)
{
	char	s[20];
	char	*hex;
	char	*hex_up;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	hex_up = "0123456789ABCDEF";
	if (c == 'x')
		i = ft_put_uorl(s, n, hex);
	else if (c == 'X')
		i = ft_put_uorl(s, n, hex_up);
	return (i);
}

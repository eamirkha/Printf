/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:08:33 by eamirkha          #+#    #+#             */
/*   Updated: 2022/04/08 15:04:54 by eamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	uintptr_t	p;
	int			count;

	count = 0;
	p = (uintptr_t)ptr;
	write(1, "0x", 2);
	count += 2;
	count += ft_puthex(p, 'x');
	return (count);
}

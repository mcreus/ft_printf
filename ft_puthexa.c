/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:29:09 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/24 17:19:19 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexa(unsigned long int n, char format)
{
	char			*base;
	int				len;
	unsigned int	base_len;

	len = 0;
	if (format == 'p')
	{
		write(1, "0x", 2);
		len += 2;
	}
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		ft_putunbr(n / 16, base);
		ft_putunbr(n % 16, base);
	}
	else
		write(1, &base[n], 1);
	len += ft_unbrlen_base(n, base_len);
	return (len);
}

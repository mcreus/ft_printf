/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:39:18 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/24 17:17:01 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunbr(unsigned long int n, const char *base)
{
	unsigned long int	base_len;
	int					nb_len;

	nb_len = 0;
	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		ft_putunbr(n / base_len, base);
		ft_putunbr(n % base_len, base);
	}
	else
		write(1, &base[n], 1);
	nb_len += ft_unbrlen_base(n, base_len);
	return (nb_len);
}

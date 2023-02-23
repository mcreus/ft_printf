/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:22:04 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/23 10:12:01 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_unbrlen_base(unsigned long int nbr, size_t base)
{
	size_t	i;

	i = 1;
	while (nbr >= (unsigned long int)base)
	{
		nbr /= base;
		i++;
	}
	return (i);
}

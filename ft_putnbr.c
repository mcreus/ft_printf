/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:22:45 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/24 17:08:26 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_strrev(char *str, int i, int n, int sign)
{
	while (i >= 0)
	{
		str[i] = (sign * (n % 10)) + '0';
		n /= 10;
		i--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

static char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;
	int		len;

	sign = 1;
	len = 1;
	i = n;
	if (n < 0)
	{
		sign = -1;
		len = 2;
	}
	while (i / 10)
	{
		len++;
		i /= 10;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = 0;
	i = len - 1;
	str = ft_strrev(str, i, n, sign);
	return (str);
}

int	ft_putnbr(int n)
{
	char	*base;
	int		nb;

	nb = 0;
	if (n == -2147483647)
	{
		write (1, "-2147483647", 11);
		return (11);
	}
	base = ft_itoa(n);
	nb += ft_printf("%s", base);
	free(base);
	return (nb);
}

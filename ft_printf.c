/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:47:09 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/23 15:55:08 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_case(va_list(args), const char format)
{
	unsigned long	ptr;

	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
	{
		ptr = va_arg(args, unsigned long);
		if (ptr)
			return (ft_puthexa(ptr, format));
		else
			return (ft_putstr("(nil)"));
	}
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putunbr(va_arg(args, unsigned int), "0123456789"));
	else if (format == 'x' || format == 'X')
		return (ft_puthexa(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		nblen;

	i = 0;
	nblen = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i]))
		{
			nblen += ft_case(args, str[i + 1]);
			i++;
		}
		else
			nblen += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (nblen);
}

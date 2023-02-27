/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:56:09 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/27 12:33:13 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>

int		ft_printf(const char *str, ...);
int		ft_puthexa(unsigned long int n, char format);
int		ft_putunbr(unsigned long int n, const char *base);
size_t	ft_putstr(char *str);
size_t	ft_strlen(const char *str);
size_t	ft_unbrlen_base(unsigned long int nbr, size_t base);
int		ft_putnbr(int n);
int		ft_putchar(char c);
int		*ft_strchr(const char *s, int c);

#endif

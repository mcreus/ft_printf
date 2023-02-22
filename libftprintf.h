/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:56:09 by mcreus            #+#    #+#             */
/*   Updated: 2023/02/22 19:16:03 by mcreus           ###   ########.fr       */
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
int		ft_putstr(char *str);
size_t	ft_strlen(const char *str);
size_t	ft_unbrlen_base(unsigned long int nbr, size_t base);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);

#endif

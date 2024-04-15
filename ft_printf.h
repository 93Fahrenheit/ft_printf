/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <fel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:54:36 by fel-abbo          #+#    #+#             */
/*   Updated: 2024/01/12 21:56:19 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <limits.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n, int *len);
int	ft_putnbru(unsigned int n, int *len);
int	ft_puthexa(unsigned int n, int *len);
int	ft_puthexa_up(unsigned int n, int *len);
int	ft_putptr(void *ptr, int *len);
int	ft_printf(const char *str, ...);
int	ft_pourcentage(char c, va_list args, int *len);
int	ft_puthexaptr(unsigned long int nb, int *len);
#endif

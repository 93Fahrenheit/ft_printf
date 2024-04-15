/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <fel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:42:31 by fel-abbo          #+#    #+#             */
/*   Updated: 2024/01/20 16:07:59 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pourcentage(char c, va_list args, int *len)
{
	if (c == 'c')
		*len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		*len += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		ft_putptr(va_arg(args, void *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (c == 'u')
		ft_putnbru(va_arg(args, unsigned long), len);
	else if (c == 'x')
		ft_puthexa(va_arg(args, int), len);
	else if (c == 'X')
		ft_puthexa_up(va_arg(args, int), len);
	else if (c == '%')
		*len += ft_putchar('%');
	return (*len);
}

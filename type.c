/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-abbo <fel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:18:52 by fel-abbo          #+#    #+#             */
/*   Updated: 2024/01/24 17:46:07 by fel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb, int *len)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		*len += ft_putchar('-');
		n = nb * -1;
	}
	if (n == 0 || (n > 0 && n <= 9))
		*len += ft_putchar(n + '0');
	else if (n >= 10)
	{
		ft_putnbr(n / 10, len);
		ft_putnbr(n % 10, len);
	}
	return (*len);
}

int	ft_putnbru(unsigned int n, int *len)
{
	if (n == 0 || (n > 0 && n <= 9))
		*len += ft_putchar(n + '0');
	else if (n >= 10)
	{
		ft_putnbru(n / 10, len);
		ft_putnbru(n % 10, len);
	}
	return (*len);
}
